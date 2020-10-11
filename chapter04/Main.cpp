//
// Created by  on 2020/10/11.
//
#include <string>
#include <iostream>
#include "Math.h"

using namespace std;


int main() {
    cout << "操作符重载" << endl;
    Math math;
    math.setA(10);
    math.setB(20);

    int value = math + 2;
    cout << "value = " << value << endl;
    value = math.operator-(2);
    cout << value << endl;
    return 1;
}

int operator+(Math &math1, Math &math2) {
    return math1.a * math1.b * math2.a * math2.b;
}

int operator+(Math &math1, int value) {
    return math1.a * math1.b * value;
}




