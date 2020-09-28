//
// Created by 郑友宏 on 2020/9/28.
//


#include <string>
#include <iostream>
#include "CppBean.h"

//全局变量如果不指定值  会默认赋值为0
int A;
using namespace std;

int main() {
    cout << "A的值是" << A << endl;

    //局部变量如果不赋值，会得到一个随机值
    int b;
    int c;
    cout << "b的值是" << b << endl;

    CppBean *cppBean = new CppBean(2, 5);

    int var2 = cppBean->getVar2();

    cout << var2 << endl;

    CppBean cppBean2(2, 5);
    cout << cppBean2.getVar2() << endl;

    return 100;
}
