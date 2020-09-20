//
// Created by  on 2020/9/19.
//
#include <iostream>

using namespace std;

int main() {
    cout << "Hello Array!" << endl;
    int *p = new int[1024];
    size_t value = sizeof(p);
    cout << value * 1024 << endl;
    int length = 100;

    for (int i = 0; i < length; ++i) {
        cout << i << "\t\t";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}

