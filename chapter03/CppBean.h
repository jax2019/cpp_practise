//
// Created by 郑友宏 on 2020/9/28.
//

#ifndef UNTITLED_CPPBEAN_H
#define UNTITLED_CPPBEAN_H

class CppBean {

public:
    CppBean();

    CppBean(int var1);

    CppBean(int var1, int var2);

private:
    int var1;
    int var2;

public:

    int getVar1() const;

    void setVar1(int var1);

    int getVar2() const;

    void setVar2(int var2);


};


#endif //UNTITLED_CPPBEAN_H

