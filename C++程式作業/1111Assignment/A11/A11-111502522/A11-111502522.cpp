/*
Assignment 11
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1001-A
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<string, map<string, int>> get_input(map<string, map<string, int>> doll_map)
{
    vector<string> input_list;
    int number;
    int i;
    string input;
    cin >> number;
    for (i = 0; i < number * 2; i++)
    {
        cin >> input;
        input_list.push_back(input);
    }
    for (i = 0; i < number * 2; i += 2)
    {
        doll_map[input_list[i + 1]][input_list[i]] += 1;
    }
    return doll_map;
}
void calculate_doll(map<string, map<string, int>> &doll_map)
{
    int each_type_ans;
    int ans_sum = 0;
    for (auto i = doll_map.begin(); i != doll_map.end(); i++)
    {
        each_type_ans = 0;
        for (auto j = i->second.begin(); j != i->second.end(); j++)
        {
            each_type_ans = max(j->second, each_type_ans);
        }
        ans_sum += each_type_ans;
    }
    cout << ans_sum << "\n";
    return;
}
int main()
{
    map<string, map<string, int>> doll_map;
    doll_map = get_input(doll_map);
    calculate_doll(doll_map);
}