//
// Created by  on 2020/9/20.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string *p;
    int length = 0;
    cout << "请输入数组长度：" << endl;
    cin >> length;

    p = new string[length];
    for (int i = 0; i < length; ++i) {
        cout << "请输入第" << i + 1 << "个字符" << endl;
        string str;
        cin >> str;
        p[i] = str;
    }

    //最长的字符串
    string maxLengthStr = p[0];
    //最短的字符串
    string minLengthStr = p[0];

    int totalLength = 0;
    for (int i = 1; i < length; ++i) {
        if (p[i].length() > maxLengthStr.length()) {
            maxLengthStr = p[i];
        } else if (p[i].length() < minLengthStr.length()) {
            minLengthStr = p[i];
        }
        totalLength += p[i].size();

    }

    cout << "最长的字符串是：" << maxLengthStr << endl;
    cout << "最短的字符串是：" << minLengthStr << endl;
    cout << "平均长度为" << totalLength * 1.0f/ length << endl;

    delete[] p;
    return 0;
}

