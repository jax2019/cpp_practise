//
// Created by 郑友宏 on 2020/10/3.
//

#ifndef UNTITLED_SCHOOL_H
#define UNTITLED_SCHOOL_H

#include <string>


class School {

private:
    int classCount;
    int which;
public:
    int getClassCount() const;

    void setClassCount(int classCount);

    int getWhich() const;

    void setWhich(int which);
};


#endif //UNTITLED_SCHOOL_H
