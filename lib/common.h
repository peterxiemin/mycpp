//
// Created by peter on 2018/11/15.
//

#ifndef STLDEMO_COMMON_H
#define STLDEMO_COMMON_H

#include <iostream>

using namespace std;

template<typename _Titr>
void display(_Titr first, _Titr last, const char *s) {
    cout << s << endl;
    while (first != last) {
        cout << *first << endl;
        ++first;
    }
}

#endif //STLDEMO_COMMON_H
