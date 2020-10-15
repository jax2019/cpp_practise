//
// Created by  on 2020/10/15.
//

#ifndef UNTITLED_A_H
#define UNTITLED_A_H

#include <string>
#include <iostream>

using namespace std;

class A {
public:
    string name;

    /**
     * 如果将virtual除掉,将不会产生多态. 调用的指针会直接关联指针类型的对象下的方法.
     */
    virtual void print();
};


#endif //UNTITLED_A_H
