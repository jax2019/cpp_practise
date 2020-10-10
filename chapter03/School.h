//
// Created by 郑友宏 on 2020/10/3.
//

#ifndef UNTITLED_SCHOOL_H
#define UNTITLED_SCHOOL_H

#include <string>

using namespace std;

class School {

private:
    int classCount;
    string which;
public:
    int getClassCount();

    void setClassCount(int classCount);

    string getWhich();

    void setWhich(string which);

    School();

    School(int classCount, string which);

    School(School &school);

    void setup(string which) const;
};


#endif //UNTITLED_SCHOOL_H
