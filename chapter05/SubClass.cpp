//
// Created by  on 2020/10/12.
//
#include "BaseClass.cpp"

class SubClass : public BaseClass {
    int a;
    void fun(){
        int c = BaseClass::a + b;
    }
};
