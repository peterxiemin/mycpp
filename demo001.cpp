//
// Created by peter on 2018/11/15.
//

#include <algorithm>
#include <iostream>
#include "demo001.h"

using namespace std;

#define SIZE 100
int iarray[SIZE];

int demo001()
{
    iarray[20] = 50;
    int* ip = find(iarray, iarray + SIZE, 50);
    if (ip == iarray + SIZE)
        cout << "50 not found in array" << endl;
    else
        cout << *ip << " found in array" << endl;
    return 0;
}