//
// Created by  on 2020/10/11.
//

#ifndef UNTITLED_MATH_H
#define UNTITLED_MATH_H


class Math {
private:
    int a, b;

public:
    int getA();

    int getB();

    void setA(int a);

    void setB(int b);

    int operator-(int num);

    Math();

    Math(int a, int b);

    void print();

    friend int operator+(Math &math1, Math &math2);
    friend int operator+(Math &math1, int value);
//    friend int operator+(Math &math1, Math &math2);
};


#endif //UNTITLED_MATH_H
