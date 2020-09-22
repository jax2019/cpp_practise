//
// Created by  on 2020/9/21.
//

#include "MyDate.h"
#include <string>
#include "Student.h"

using namespace std;

int main() {
    MyDate date = MyDate();
    date.printDate();

    cout << "----------------------" << endl;
    Student student = Student();
    student.print();

    Student ss;

    const string &basicString = ss.getName();
    cout << basicString << endl;

    Student *sp = &student;
    const string &name = sp->getName();
    cout << "name = " << name << endl;
    sp->setName("zyh");
    const string &name1 = sp->getName();
    cout << "name = " << name1 << endl;

}

void Student::appendName(string appendString) {
    setName(getName().append(appendString));
}

MyDate::MyDate() {
    year = 2020;
    month = 9;
    day = 20;
    week = "星期天";
}

void MyDate::setMonth(int month) {
    MyDate::month = month;
}

void MyDate::setDay(int day) {
    MyDate::day = day;
}

void MyDate::setWeek(string week) {
    MyDate::week = week;
}

void MyDate::printDate() {
    cout << "当前日期：" << endl;
    cout << year << " : " << month << " : " << day << "\t" << week << endl;
}
