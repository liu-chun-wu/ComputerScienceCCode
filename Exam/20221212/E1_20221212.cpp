#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main()
{
    map<char, int> exchange;
    exchange['A'] = 10;
    exchange['B'] = 11;
    exchange['C'] = 12;
    exchange['D'] = 13;
    exchange['E'] = 14;
    exchange['F'] = 15;
    exchange['G'] = 16;
    exchange['H'] = 17;
    exchange['J'] = 18;
    exchange['K'] = 19;
    exchange['L'] = 20;
    exchange['M'] = 21;
    exchange['N'] = 22;
    exchange['P'] = 23;
    exchange['Q'] = 24;
    exchange['R'] = 25;
    exchange['S'] = 26;
    exchange['T'] = 27;
    exchange['U'] = 28;
    exchange['V'] = 29;
    exchange['X'] = 30;
    exchange['Y'] = 31;
    exchange['W'] = 32;
    exchange['Z'] = 33;
    exchange['I'] = 34;
    exchange['O'] = 35;
    vector<int> v;
    string input;
    cin >> input;
    int command;
    int check_sum;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            v.push_back(exchange[input[i]]);
        }
        else
        {
            v.push_back(input[i] - '0');
        }
    }
    check_sum = (v[0] * 1 + v[1] * 9 + v[2] * 8 + v[3] * 7 + v[4] * 6 + v[5] * 5 + v[6] * 4 + v[7] * 3 + v[8] * 2 + v[9] * 1 + v[10] * 1);
    while (1)
    {
        cin >> command;
        if (command == 0)
        {
            break;
        }
        if (command == 1)
        {
            for (auto i : v)
            {
                cout << i;
            }
            cout << endl;
        }
        else if (command == 2)
        {
            cout << check_sum << endl;
        }
        else if (command == 3)
        {
            if (check_sum % 10 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}