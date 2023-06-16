/*
Assignment 15
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1001-A
*/
#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;
void sort_card(string *card)
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
    string first, second;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            for (int k = 0; k < 13 - 1; k++)
            {
                first = *(card + i * 13 + k);
                second = *(card + i * 13 + (k + 1));
                if (first[0] != second[0])
                {
                    if (dic[first[0]] > dic[second[0]])
                    {
                        swap(*(card + i * 13 + k), *(card + i * 13 + (k + 1)));
                    }
                }
                else if (first[0] == second[0])
                {
                    if (dic[first[1]] > dic[second[1]])
                    {
                        swap(*(card + i * 13 + k), *(card + i * 13 + (k + 1)));
                    }
                }
            }
        }
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