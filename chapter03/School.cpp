//
// Created by 郑友宏 on 2020/10/3.
//

#include "School.h"

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



