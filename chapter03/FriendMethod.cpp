//
// Created by  on 2020/10/11.
//

#include "FriendMethod.h"

void friendMethod() {
    FriendMethod friendMethod1;
    friendMethod1.getValue();
}

void FriendMethod::setA(int a) {
    this->a = a;
}

void FriendMethod::setB(int b) {
    this->b = b;
}

int FriendMethod::getA() {
    return this->a;
}

int FriendMethod::getB() {
    return this->b;
}

int FriendMethod::getValue() {
    return this->a * this->b;
}

FriendMethod::FriendMethod(int a, int b) : a(a), b(b) {}

FriendMethod::FriendMethod() {
    a = 0;
    b = 0;
}

