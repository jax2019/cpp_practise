//
// Created by 郑友宏 on 2020/10/3.
//

#include "School.h"
#include <iostream>
#include "FriendMethod.h"

using namespace std;

int School::getClassCount() {
    return classCount;
}

void School::setClassCount(int classCount) {
    this->classCount = classCount;
}

string School::getWhich() {
    return which;
}

void School::setWhich(string which) {
    this->which = which;
}

School::School() : which("石首市南岳高中"), classCount(100) {}

School::School(int classCount, string which) {
    this->which = which;
    this->classCount = classCount;
}

School::School(School &school) {
    this->setWhich("复制: " + school.getWhich());
}

void School::setup(string which) const {
    std::cout << "使用常量函数修改" << endl;
}

void School::testFriend() {
    FriendMethod friendMethod(10, 100);
    cout << "friendMethod test value = " << friendMethod.getValue() << endl;
}



