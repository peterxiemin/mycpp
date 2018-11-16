//
// Created by peter on 2018/11/15.
//

#include "demo003.h"
#include "lib/common.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<double> vectors(10);
int demo003() {
    double darray[10] = {1.0, 20.0, 30.0, 90.0, 100.0, 150.0, 300.0, 10000.0, 100000.0, 1000001.0};
    vector<double>::iterator itr = vectors.begin();
    copy(darray, darray + 10, itr);

    /**
     * reverse
     */

    random_shuffle(vectors.begin(), vectors.end());
    sort(vectors.begin(), vectors.end());
    reverse(vectors.begin(), vectors.end());
//    display(vectors.begin(), vectors.end(), "hello world");
}
