//
// Created by  on 2020/9/21.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H

#include "MyDate.h"
#include <string>

using namespace std;

class Student {
private:
    MyDate birthday;
    string name;

public:
    MyDate getBirthday();

    void setBirthday(MyDate birthday);

    string getName();

    void setName(string name);

    Student();

    void print();
};


#endif //UNTITLED_STUDENT_H
