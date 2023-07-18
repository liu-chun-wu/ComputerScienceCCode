#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
bool compare2(string a, string b)
{
    map<char, int> dic;
    dic['H'] = 4;
    dic['S'] = 3;
    dic['D'] = 2;
    dic['C'] = 1;
    dic['2'] = 2;
    dic['3'] = 3;
    dic['4'] = 4;
    dic['5'] = 5;
    dic['6'] = 6;
    dic['7'] = 7;
    dic['8'] = 8;
    dic['9'] = 9;
    dic['T'] = 10;
    dic['J'] = 11;
    dic['Q'] = 12;
    dic['K'] = 13;
    dic['A'] = 14;
    /*
    if (a[0] != b[0] )
    {
        return dic[a[0]] < dic[b[0]];
    }
    else
    {
        return dic[a[1]] < dic[b[1]];
    }
    */
    if (a[0] != b[0] && dic[a[0]] < dic[b[0]])
    {
        return true;
    }
    else if (a[0] == b[0] && dic[a[1]] < dic[b[1]])
    {
        return true;
    }
    return false;
}
void sort_card(string *card)
{
    for (int i = 0; i < 4; i++)
    {
        sort(card + i * 13, card + (i + 1) * 13, compare2);
    }
}
void show_card(string *card)
{
    ofstream output("output.txt");
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            output << "S:";
            break;
        case 1:
            output << "W:";
            break;
        case 2:
            output << "N:";
            break;
        case 3:
            output << "E:";
            break;
        }
        for (int j = 0; j < 13; j++)
        {
            output << " " << *(card + i * 13 + j);
        }
        output << endl;
    }
}
int main()
{
    map<char, int> change;
    change['S'] = 1;
    change['W'] = 2;
    change['N'] = 3;
    change['E'] = 0;
    string card[4][13];
    ifstream input("input.txt");
    ofstream output("output.txt");
    char pos;
    int start;
    input >> pos;
    start = change[pos];
    string input_card;
    int C3;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            input >> input_card;
            if (input_card == "C3")
            {
                C3 = start % 4;
            }
            card[start % 4][i] = input_card;
            start++;
        }
    }
    int command;
    input >> command;
    switch (command)
    {
    case 1:
        switch (C3)
        {
        case 0:
            output << "S" << endl;
            break;
        case 1:
            output << "W" << endl;
            break;
        case 2:
            output << "N" << endl;
            break;
        case 3:
            output << "E" << endl;
            break;
        }
        break;
    case 2:
        show_card(&card[0][0]);
        break;
    case 3:
        sort_card(&card[0][0]);
        show_card(&card[0][0]);
        break;
    }
}
