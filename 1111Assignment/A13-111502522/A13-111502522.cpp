/*
Assignment 13
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1001-A
*/
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int *mergearray(int *arr1, int *arr2, int length, int (*function)(int, int))
{
    int *ar3 = new int(length);
    for (int i = 0; i < length; i++)
    {
        ar3[i] = function(arr1[i], arr2[i]);
    }
    return ar3;
}
int main()
{
    int n;
    int input;
    int *ar1 = new int[n];
    int *ar2 = new int[n];
    int *ar3;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        ar1[i] = input;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        ar2[i] = input;
    }
    string command;
    cin >> command;
    if (command == "add")
    {
        ar3 = mergearray(ar1, ar2, n, add);
    }
    else if (command == "sub")
    {
        ar3 = mergearray(ar1, ar2, n, sub);
    }
    else if (command == "mul")
    {
        ar3 = mergearray(ar1, ar2, n, mul);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar3[i];
        cout << " ";
    }
    cout << endl;
}