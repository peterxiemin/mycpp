//
// Created by peter on 2018/11/15.
//

#include "demo002.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> intVector(100);

int demo002() {
    intVector[20] = 50;
    vector<int>::iterator intIter =
            find(intVector.begin(), intVector.end(), 50);
    if (intIter != intVector.end())
        cout << "Vector contains value " << *intIter << endl;
    else
        cout << "Vector does not contain 50" << endl;
}