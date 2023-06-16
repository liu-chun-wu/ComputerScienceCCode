/*
Practice 11
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1003-A
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<int, int> get_input(map<int, int> doll_map)
{
    int input;
    int number;
    int i;
    cin >> number;
    for (i = 0; i < number; i++)
    {
        cin >> input;
        doll_map[input] += 1;
    }
    return doll_map;
}
void calculate_doll(map<int, int> &doll_map)
{
    int ans = 0;
    for (auto i : doll_map)
    {
        ans = max(i.second, ans);
    }
    cout << ans << "\n";
}
int main()
{
    map<int, int> doll_map;
    doll_map = get_input(doll_map);
    calculate_doll(doll_map);
}
