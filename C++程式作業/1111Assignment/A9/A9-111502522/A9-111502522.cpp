/*
Assignment 9
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1001-A
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
void display_calender(int year, int month, int day)
{
    int first_day_of_month = which_date(year, month, 1);
    int i, count;
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (i = 0; i < 7; i++)
        printf("%5d", i);
    cout << endl
         << "=====================================" << endl;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        month_days[1] = 29;
    }
    for (i = 1; i <= first_day_of_month; i++)
    {
        cout << "     ";
    }
    count = first_day_of_month;
    for (i = 1; i <= month_days[month - 1]; i++)
    {
        if (count % 7 == 0 and i != 1)
        {
            cout << endl;
        }
        count++;
        if (i == day)
        {
            if (i >= 10)
            {
                cout << "  *" << i;
            }
            else
            {
                cout << "   *" << i;
            }
            continue;
        }
        printf("%5d", i);
    }
    cout << endl
         << "=====================================" << endl;
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
    cout << endl;
    display_calender(year, month, day);
}