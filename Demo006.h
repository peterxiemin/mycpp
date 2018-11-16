//
// Created by peter on 2018/11/16.
//

#ifndef STLDEMO_DEMO006_H
#define STLDEMO_DEMO006_H

#include <iostream>
#include <string>

using namespace std;

class Demo006 {
public:
    Demo006(const string &b, int a);

private:
    int a;
    string b;
public:
    void echo();
};


#endif //STLDEMO_DEMO006_H
