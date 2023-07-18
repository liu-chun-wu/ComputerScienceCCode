/*
Assignment 8
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1001-A
*/
#include <iostream>
using namespace std;
int main()
{
    int first, first_origin;
    int second, second_origin;
    int temp;
    int gcd, lcm;
    cin >> first >> second;
    first_origin = first;
    second_origin = second;
    while (second != 0)
    {
        temp = second;
        second = first % second;
        first = temp;
    }
    gcd = first;
    lcm = (first_origin / gcd) * (second_origin / gcd) * gcd;
    cout << lcm << endl;
}
