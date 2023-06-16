#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    set<int> a_set = {1, 2, 3, 4, 5};
    a_set.insert(6);
    a_set.erase(3);
    vector<int> a_vector = {1, 2, 3, 4, 5};
    a_vector.push_back(6);
    a_vector.pop_back();
    a_vector.insert(a_vector.begin() + 1, 10);
    a_vector.erase(a_vector.begin() + 1);
    for (auto i = a_set.begin(); i != a_set.end(); i++) // 從頭指到尾
    {
        cout << *i << " ";
    }
    cout << "\n";
    for (auto i = a_vector.rbegin(); i != a_vector.rend(); i++) // 從尾指到頭
    {
        cout << *i << " ";
    }
    cout << "\n";
    for (int i = 0; i < a_set.size(); i++) // 用size取得容器大小
    {
        cout << a_vector[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < a_vector.size(); i++) // 用size取得容器大小
    {
        cout << a_vector[i] << " ";
    }
    cout << "\n";
    for (auto i : a_set) // 毒瘤寫法，但是很爽
    {
        cout << i << " ";
    }
    cout << "\n";
    for (auto i : a_vector) // 毒瘤寫法，但是很爽
    {
        cout << i << " ";
    }
    cout << "\n";
    // Note : 雙層的vector用法和陣列一樣
    map<string, int> a_map;
    a_map["first"] = 1;
    a_map["second"] = 2;
    a_map["thrid"] = 3;
    for (auto i = a_map.begin(); i != a_map.end(); i++)
    {
        cout << i->first << " " << i->second << "\n";
    }
    cout << "\n";
    for (auto i = a_map.rbegin(); i != a_map.rend(); i++)
    {
        cout << i->first << " " << i->second << "\n";
    }
    cout << "\n";
    // 雙層的map邏輯也是差不多
    map<int, map<string, int>> a_2_layer_map;
    a_2_layer_map[10]["10_first"] = 1;
    a_2_layer_map[10]["10_second"] = 2;
    a_2_layer_map[10]["10_third"] = 3;
    a_2_layer_map[20]["20_first"] = 4;
    a_2_layer_map[20]["20_second"] = 5;
    a_2_layer_map[20]["20_third"] = 6;
    for (auto i = a_2_layer_map.begin(); i != a_2_layer_map.end(); i++)
    {
        for (auto j = i->second.begin(); j != i->second.end(); j++)
        {
            cout << i->first << " " << j->first << " " << j->second << "\n";
        }
    }
}