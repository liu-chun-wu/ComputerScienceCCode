/*
Practice X
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1003-A
*/
#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;
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
    show_card(&card[0][0]);
}