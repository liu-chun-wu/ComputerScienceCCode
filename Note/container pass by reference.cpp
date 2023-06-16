#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
void cal1(vector<int> &a_vector)
{
    for (auto i : a_vector)
    {
        cout << i << " ";
    }
    cout << "\n";
}
void cal2(set<int> &a_set)
{
    for (auto i : a_set)
    {
        cout << i << " ";
    }
    cout << "\n";
}
void cal3(map<string, int> &a_map)
{
    for (auto i = a_map.begin(); i != a_map.end(); i++)
    {
        cout << i->first << " " << i->second << "\n";
    }
}
int main()
{
    vector<int> a_vector = {1, 2, 3, 4, 5};
    set<int> a_set = {1, 2, 3, 4, 5};
    map<string, int> a_map;
    a_map["first"] = 1;
    a_map["second"] = 2;
    a_map["thrid"] = 3;
    cal1(a_vector);
    cal2(a_set);
    cal3(a_map);
}