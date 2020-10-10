//
// Created by 郑友宏 on 2020/9/28.
//


#include <string>
#include <iostream>
#include "CppBean.h"
#include "School.h"
#include "JD.h"

static int gVar = 100;

//全局变量如果不指定值  会默认赋值为0
int A;
using namespace std;

void fun1();

int main() {
    cout << "A的值是" << A << endl;

    //局部变量如果不赋值，会得到一个随机值
    int b;
    cout << "b的值是" << b << endl;

    CppBean *cppBean = new CppBean(2, 5);

    int var2 = cppBean->getVar2();

    cout << var2 << endl;

    CppBean cppBean2(2, 5);
    cout << cppBean2.getVar2() << endl;

    cout << "-----------------" << endl;

    //使用new创建对象,不加括号,成员变量会被赋随机值
    CppBean *cppBean3 = new CppBean();
    cout << "var2 = " << cppBean3->getVar2() << endl;
    cout << "var1 = " << cppBean3->getVar1() << endl;

    cout << "-----------------" << endl;

    School *pSchool1 = new School;
    School *pSchool2 = new School();
    cout << "classCount = " << pSchool1->getClassCount() << endl;
    cout << "classCount = " << pSchool2->getClassCount() << endl;

    cout << "----------------- array" << endl;

    School schoolArray[3];
    cout << schoolArray[1].getWhich() << endl;

    cout << "----------------- copy" << endl;
    School schoolA(10, "北京大学");
    const School schoolB;
    School schoolC = schoolA;

    cout << schoolC.getWhich() << endl;
    cout << "----------------- constructor" << endl;

    JD jd(100);

    jd = 7;
    cout << "rank = " << jd.getRank() << endl;
    cout << "jd.a = " << jd.getA() << "\t\t" << "id.b = " << jd.getB() << endl;

    cout << "----------------- global variable" << endl;

    for (int i = 0; i < 3; ++i) {
        fun1();
        cout << "全局变量" << gVar << endl;
    }
    return 100;
}

void fun1() {
    gVar++;
}
