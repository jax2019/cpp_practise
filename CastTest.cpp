//
// Created by  on 2020/9/19.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 10;
    const int *p = &a;
    int *q = &a;

    const int ca = 30;
    int c = 4;

    p = const_cast<int *>(&c);

    p = &c;
    cout << *p;

    p = &ca;
    q = const_cast<int *>(p);
    *q = 500;

    cout << *p << "   " << *q << endl;
    *q = 10012;
    cout << *q << endl;

    int value = 111;
    int value2 = 222;
    const int *a1 = &value;
    value = 99;
    cout << *a1 << endl;

    value = 111;
    int * const a2 = & value;
    *a2 = value2;
    cout << *a2 << endl;

    return 100;
}
