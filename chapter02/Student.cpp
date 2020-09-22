//
// Created by  on 2020/9/21.
//

#include "Student.h"
#include "MyDate.h"


Student::Student() {
    setBirthday(MyDate());
    setName("zheng");
}

MyDate Student::getBirthday() {
    return birthday;
}

void Student::setBirthday(MyDate birthday) {
    Student::birthday = birthday;
}

string Student::getName() {
    return name;
}

void Student::setName(const string name) {
    Student::name = name;
}



void Student::print() {
    cout << "birthday - > " << endl;
    getBirthday().printDate();
    cout << "姓名： - > " << endl;
    cout << name << endl;
}
