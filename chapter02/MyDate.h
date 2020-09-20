//
// Created by  on 2020/9/21.
//

#ifndef UNTITLED_MYDATE_H
#define UNTITLED_MYDATE_H


#include <iostream>

class MyDate {
private:
    int year, month, day;
    std::string week;
public:
    void setMonth(int month);

    void setDay(int day);

    void setWeek(std::string week);

    void setYear(int year);

    void printDate();

     MyDate();
};


#endif //UNTITLED_MYDATE_H
