#include <iostream>
#include <string>
using namespace std;
int main()
{
    // 轉型 char->int
    char ch = '1';
    cout << ch - '0' + 1000 << endl;
    // 轉型 string->int 要include<string> 用stoi(string)=int
    string str1 = "1";
    cout << stoi(str1) + 1000 << endl;
    string str2 = "12";
    cout << stoi(str2) + 1000 << endl;
}