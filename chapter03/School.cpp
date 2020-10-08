//
// Created by 郑友宏 on 2020/10/3.
//

#include "School.h"

int School::getClassCount() const {
    return classCount;
}

void School::setClassCount(int classCount) {
    School::classCount = classCount;
}

int School::getWhich() const {
    return which;
}

void School::setWhich(int which) {
    School::which = which;
}
