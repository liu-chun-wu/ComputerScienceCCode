#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
using namespace std;
vector<int> v;
int n;
void display()
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}
void loop()
{
    int temp;
    int hold = v[0];
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            temp = hold - v[i];
        }
        else
        {
            temp = v[i] - v[i + 1];
        }
        v[i] = abs(temp);
    }
}
void test()
{
    vector<string> record;
    string temp;
    string test_string;
    int bool1;
    temp = "";
    for (int i = 0; i < n; i++)
    {
        temp += v[i];
    }
    record.push_back(temp);
    while (1)
    {
        bool1 = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                bool1 = 0;
                break;
            }
        }
        if (bool1)
        {
            cout << "ZERO" << endl;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            test_string += v[i];
        }
        bool1 = 0;
        for (int i = 0; i < record.size(); i++)
        {
            if (record[i] == test_string)
            {
                bool1 = 1;
                break;
            }
        }
        if (bool1)
        {
            cout << "LOOP" << endl;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            temp += v[i];
        }
        record.push_back(temp);
        loop();
        system("pause");
    }
}
int main()
{
    cin >> n;
    for (int i = 0, input; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    int command;
    cin >> command;
    switch (command)
    {
    case 1:
        loop();
        display();
        break;
    case 2:
        loop();
        loop();
        loop();
        display();
        break;
    case 3:
        test();
        break;
    }
}