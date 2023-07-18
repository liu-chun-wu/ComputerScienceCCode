/*
Assignment 12
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1001-A
*/
#include <iostream>
using namespace std;
int a[12][12] = {0};
int global_y, global_x;
int global_count;
void find_island(int local_y, int local_x)
{
    if (a[local_y][local_x] == 1)
    {
        a[local_y][local_x] = 0;
        global_count += 1;
        if (a[local_y - 1][local_x] == 1)
        {
            find_island(local_y - 1, local_x);
        }
        if (a[local_y + 1][local_x] == 1)
        {
            find_island(local_y + 1, local_x);
        }
        if (a[local_y][local_x - 1] == 1)
        {
            find_island(local_y, local_x - 1);
        }
        if (a[local_y][local_x + 1] == 1)
        {
            find_island(local_y, local_x + 1);
        }
        return;
    }
    return;
}
int main()
{
    int count = 0;
    int input;
    int max_area = 0;
    cin >> global_y >> global_x;
    for (int i = 1; i < global_y + 1; i++)
    {
        for (int j = 1; j < global_x + 1; j++)
        {
            cin >> input;
            a[i][j] = input;
        }
    }
    for (int i = 1; i < global_y + 1; i++)
    {
        for (int j = 1; j < global_x + 1; j++)
        {
            if (a[i][j] == 1)
            {
                global_count = 0;
                count += 1;
                find_island(i, j);
                max_area = max(global_count, max_area);
            }
        }
    }
    cout << max_area;
}