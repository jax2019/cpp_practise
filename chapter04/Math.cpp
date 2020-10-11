//
// Created by  on 2020/10/11.
//

#include "Math.h"
#include <iostream>
#include "string"

using namespace std;


void Math::setA(int a) {
    this->a = a;
}

void Math::setB(int b) {
    this->b = b;
}

int Math::getA() {
    return a;
}

int Math::getB() {
    return b;
}

int Math::operator-(int num) {
    return a + b - num;
}


void Math::print() {
    cout << "a = " << a << "\tb = " << b;
}

Math::Math() {}

Math::Math(int a, int b) : a(a), b(b) {}

