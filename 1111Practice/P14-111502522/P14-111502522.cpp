/*
Practice X
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1003-A
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
using namespace std;
void read_score(vector<vector<string>> &list)
{
    ifstream input_score;
    string name, ch, en, ma, sc;
    vector<string> input;

    input_score.open("score.txt");
    while (input_score >> name)
    {
        input_score >> ch >> en >> ma >> sc;
        input.push_back(name);
        input.push_back(ch);
        input.push_back(en);
        input.push_back(ma);
        input.push_back(sc);
        list.push_back(input);
        input.clear();
    }
    input_score.close();
}
int main()
{
    vector<vector<string>> list;
    read_score(list);
    ofstream output;

    output.open("output.txt");
    for (int i = 0; i < list.size(); i++)
    {
        if (stoi(list[i][1]) >= 12 && stoi(list[i][2]) >= 12 && stoi(list[i][3]) >= 8 && stoi(list[i][4]) >= 12)
        {
            output << "Hello " << list[i][0] << ", welcome to NCU CSIE!";
        }
        else
        {
            output << "Sorry, " << list[i][0] << " can't enter NCU CSIE.";
        }
        output << endl;
    }
    output.close();
}