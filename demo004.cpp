//
// Created by peter on 2018/11/15.
//

#include "demo004.h"
#include <iostream>
#include <list>
#include "lib/common.h"
#include <algorithm>

using namespace std;

int demo004() {
    list<double> ilist;
    int i = 0;
    double darray[10] = {1.0, 20.0, 30.0, 90.0, 100.0, 150.0, 300.0, 10000.0, 100000.0, 1000001.0};
    copy(darray, darray + 10, front_inserter(ilist));
    display(ilist.begin(), ilist.end(), "");
    list<double>::iterator itr;
    cout << endl;
    for (int i =0; i < 15; i++) {
        itr = find(ilist.begin(), ilist.end(), 100000);
        advance(itr, i);
        cout << *itr << endl;
    }

//    copy(darray, darray + 2, front_inserter(ilist));
//    copy(darray, darray + 10, inserter(ilist, ilist.begin()));
//    copy(darray, darray + 2, inserter(ilist, ilist.end()));
//    copy(darray, darray + 10, back_inserter(ilist));
//    copy(darray, darray + 2, back_inserter(ilist));
//    display(ilist.begin(), ilist.end(), "hello world");
//    copy(darray, darray + 2, inserter(ilist, ilist.begin()));
//    display(ilist.begin(), ilist.end(), "hello world");
}
