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
using namespace std;
void read_score(map<string, vector<int>> &list, vector<string> &cmp)
{
    ifstream input_score;
    vector<int> temp;
    int ch, en, ma, sc;
    string name;
    input_score.open("C:\\Users\\Jeffery\\Desktop\\VScode(C++)\\score.txt");
    while (input_score >> name)
    {
        input_score >> ch >> en >> ma >> sc;
        temp.push_back(ch);
        temp.push_back(en);
        temp.push_back(ma);
        temp.push_back(sc);
        list.insert(pair<string, vector<int>>(name, temp));
        temp.clear();
        cmp.push_back(name);
    }
    input_score.close();
}
int main()
{
    vector<string> cmp;

    map<string, vector<int>> list;
    read_score(list, cmp);

    ifstream cmd;
    ofstream output;
    string name, subject;
    map<string, int> change;
    int bool1;

    change["chinese"] = 0;
    change["engilsh"] = 1;
    change["math"] = 2;
    change["science"] = 3;

    cmd.open("C:\\Users\\Jeffery\\Desktop\\VScode(C++)\\cmd.txt");
    output.open("C:\\Users\\Jeffery\\Desktop\\VScode(C++)\\output.txt");
    for (int i = 0; i < cmp.size(); i++)
    {
        if (list[cmp[i]][0] >= 12 && list[cmp[i]][1] >= 12 && list[cmp[i]][2] >= 8 && list[cmp[i]][3] >= 12)
        {
            output << "Hello " << cmp[i] << ", welcome to NCU CSIE!";
        }
        else
        {
            output << "Sorry, " << cmp[i] << " can't enter NCU CSIE.";
        }
        output << endl;
    }
    while (cmd >> name)
    {
        bool1 = 1;
        cmd >> subject;
        for (int i = 0; i < cmp.size(); i++)
        {
            if (name == cmp[i])
            {
                if (subject == "chinese" || subject == "math" || subject == "english" || subject == "science")
                {
                    output << list[cmp[i]][change[subject]];
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