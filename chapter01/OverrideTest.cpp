//
// Created by  on 2020/9/20.
//
#include <iostream>

using namespace std;


int bigger(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

float bigger(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

double bigger(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a = 10;
    int b = 20;

    float c = 30;
    float d = 40;

    double e = 50;
    double f = 60;

    int i = bigger(a, d);

    cout << i << endl;
    return 0;
}


