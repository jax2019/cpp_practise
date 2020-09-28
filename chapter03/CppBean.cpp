//
// Created by 郑友宏 on 2020/9/28.
//

#include "CppBean.h"
#include <iostream>
#include <string>

using namespace std;


int CppBean::getVar1() const {
    return var1;
}

void CppBean::setVar1(int var1) {
    CppBean::var1 = var1;
}

int CppBean::getVar2() const {
    return var2;
}

void CppBean::setVar2(int var2) {
    CppBean::var2 = var2;
}

CppBean::CppBean() {}

CppBean::CppBean(int var1, int var2) : var1(var1), var2(var2) {
    CppBean::var2 = 200;
}

CppBean::CppBean(int var1) {
    CppBean::var1 = var1;
    CppBean::var2 = 100;
}
