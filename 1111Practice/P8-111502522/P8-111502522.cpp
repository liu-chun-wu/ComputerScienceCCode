/*
Practice 8
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1003-A
*/
#include <iostream>
using namespace std;
int main()
{
    int first;
    int second;
    int temp;
    cin >> first >> second;
    while (second != 0)
    {
        temp = second;
        second = first % second;
        first = temp;
    }
    cout << first << endl;
}