/*
Practice 9
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1003-A
*/
#include <iostream>
using namespace std;
int which_date(int year, int month, int day)
{
    int Day_of_the_week;
    if (month == 1 || month == 2)
    {
        month += 12;
        year--;
    }
    Day_of_the_week = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;
    if (Day_of_the_week < 0)
    {
        Day_of_the_week += 7;
    }
    return Day_of_the_week;
}
int main()
{
    int year, month, day;
    cin >> year >> month >> day;
    switch (which_date(year, month, day))
    {
    case 0:
        cout << "Sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    }
}