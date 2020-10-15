//
// Created by  on 2020/10/11.
//

#ifndef UNTITLED_FRIENDMETHOD_H
#define UNTITLED_FRIENDMETHOD_H

#include "School.h"

class FriendMethod {

private:
    int a;
    int b;

    int getValue();

public:
    FriendMethod(int a, int b);

    FriendMethod();

public:
    int getA();

    void setA(int a);

    int getB();

    void setB(int b);

    //友元函数不受权限修饰符的限制
    friend void friendMethod();

    friend void School::testFriend();


};


#endif //UNTITLED_FRIENDMETHOD_H
