/*
Practice 14
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

    ifstream cmd;
    ofstream output;
    string name, subject;
    map<string, int> change;
    int bool1;

    change["chinese"] = 1;
    change["engilsh"] = 2;
    change["math"] = 3;
    change["science"] = 4;

    cmd.open("cmd.txt");
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
    while (cmd >> name)
    {
        bool1 = 1;
        cmd >> subject;
        for (int i = 0; i < list.size(); i++)
        {
            if (name == list[i][0])
            {
                if (subject == "chinese" || subject == "math" || subject == "english" || subject == "science")
                {
                    output << list[i][change[subject]];
                    bool1 = 0;
                    break;
                }
            }
        }
        if (bool1)
        {
            output << "Error";
        }
        output << endl;
    }
    cmd.close();
    output.close();
}