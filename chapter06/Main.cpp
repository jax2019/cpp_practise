//
// Created by  on 2020/10/15.
//
#include <string>
#include <iostream>
#include "B.h"

using namespace std;

int main() {
    A a;
    B b;
    A *pa;
    pa = &a;
    pa->print();
    cout << "-----------" << endl;
    pa = &b;
    pa->print();



    return 0;
}