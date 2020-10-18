//
// Created by  on 2020/10/16.
//

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int) {

//    int x, sum = 0;
//
////    freopen("../chapter07/123.txt", "r", stdin);
//
//    for (int count = 0; count < 0; ++count) {
//        cin >> x;
//        if (cin.eof()) {
//            cout << "输入结束" << endl;
//            break;
//        } else {
//            sum += x;
//        }
//    }
//
//    cout << "total = " << sum << endl;
//
//    cout << "------------" << endl;
//    cout << "ends" << flush << "123" << endl;
//
//    int a = 100, b = 200;
//    cout << hex << a << "  " << b << endl;
//    cout << 100 << endl;
//
//    cout << resetiosflags(ios::right) << endl;
//    cout.width(20);
//    cout.fill('A');
//    cout << 100 << endl;
//
//    cout << "------------" << endl;

//    int n = 0;
//    char ch;
//
//    freopen("../chapter07/eof.txt", "r", stdin);
//
//
//
//    while ((ch = cin.get()) != EOF) {
//        cout.put(ch);
//        n++;
//    }
//
//    cout << "字符总数为:" << n << endl;

    char buf[10];

     bool a = cin.getline(buf, 3);

     cout << a << endl;
     fstream fs;
    if (fs) {
    }
    return 0;

}

