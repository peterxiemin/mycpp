//
// Created by peter on 2018/11/15.
//

#include "demo005.h"
#include "lib/common.h"

#include <map>
#include <string>
#include <iostream>

using namespace std;

int demo005() {
    map<int, string> kivsmap;
    kivsmap.insert(pair<int, string>(1, "aaa"));
    kivsmap.insert(pair<int, string>(1, "aaa"));
    kivsmap.insert(pair<int, string>(3, "ccc"));
    kivsmap.insert(pair<int, string>(2, "bbb"));
    kivsmap.insert(pair<int, string>(4, "ddd"));

    kivsmap.insert(map<int, string>::value_type(5, "eee"));
    kivsmap.insert(map<int, string>::value_type(6, "fff"));
    kivsmap.insert(map<int, string>::value_type(7, "ggg"));
    kivsmap.insert(map<int, string>::value_type(8, "hhh"));


    kivsmap[9] = "iii";
    kivsmap[10] = "jjj";
    kivsmap[11] = "kkk";
    kivsmap[12] = "lll";


    /** tranverse **/
    for (map<int, string>::iterator itr = kivsmap.begin(); itr != kivsmap.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }

    /** size **/
    cout << kivsmap.size() << endl;

    /** reverse tranverse **/
    for (map<int, string>::reverse_iterator itr = kivsmap.rbegin(); itr != kivsmap.rend(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }

    /** array tranverse **/
    for (int i = 0; i < kivsmap.size(); i++) {
        cout << kivsmap[i] << endl;
    }

    /** find **/
    map<int, string>::iterator itr = kivsmap.find(1);
    cout << itr->first << " " << itr->second << endl;

    /** contains **/
    itr = kivsmap.lower_bound(1);
    cout << itr->first << " " << itr->second << endl;


    itr = kivsmap.upper_bound(1);
    cout << itr->first << " " << itr->second << endl;

    /** erase **/
    itr = kivsmap.find(1);
    kivsmap.erase(itr);

    kivsmap.erase(1);

    /** array tranverse **/
    for (int i = 0; i < kivsmap.size(); i++) {
        cout << kivsmap[i] << endl;
    }
}