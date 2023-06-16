#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
vector<string> N;
vector<string> E;
vector<string> S;
vector<string> W;
string C_arr[13] = {"C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "CT", "CJ", "CQ", "CK"};
string D_arr[13] = {"D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DT", "DJ", "DQ", "DK"};
string H_arr[13] = {"H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "HT", "HJ", "HQ", "HK"};
string S_arr[13] = {"S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "ST", "SJ", "SQ", "SK"};
void display()
{
    cout << "S: ";
    for (int i = 0; i < S.size(); i++)
    {
        if (i != S.size() - 1)
        {
            cout << S[i] << " ";
        }
        else
        {
            cout << S[i] << endl;
        }
    }
    cout << "W: ";
    for (int i = 0; i < W.size(); i++)
    {
        if (i != W.size() - 1)
        {
            cout << W[i] << " ";
        }
        else
        {
            cout << W[i] << endl;
        }
    }
    cout << "N: ";
    for (int i = 0; i < N.size(); i++)
    {
        if (i != N.size() - 1)
        {
            cout << N[i] << " ";
        }
        else
        {
            cout << N[i] << endl;
        }
    }
    cout << "E: ";
    for (int i = 0; i < E.size(); i++)
    {
        if (i != E.size() - 1)
        {
            cout << E[i] << " ";
        }
        else
        {
            cout << E[i] << endl;
        }
    }
}
int main()
{

    string input_card;
    int C_count[13] = {0};
    int D_count[13] = {0};
    int S_count[13] = {0};
    int H_count[13] = {0};
    int command;
    char start;
    int pos;
    char C3_player;
    cin >> start;
    if (start == 'N')
    {
        pos = 0 + 1;
    }
    else if (start == 'E')
    {
        pos = 1 + 1;
    }
    else if (start == 'S')
    {
        pos = 2 + 1;
    }
    else if (start == 'W')
    {
        pos = 3 + 1;
    }
    for (int m = 0; m < 2; m++)
    {
        for (int i = 0; i < 26; i++)
        {
            cin >> input_card;
            if (pos % 4 == 0)
            {
                if (input_card == "C3")
                {
                    C3_player = 'N';
                }
                N.push_back(input_card);
            }
            else if (pos % 4 == 1)
            {
                if (input_card == "C3")
                {
                    C3_player = 'E';
                }
                E.push_back(input_card);
            }
            else if (pos % 4 == 2)
            {
                if (input_card == "C3")
                {
                    C3_player = 'S';
                }
                S.push_back(input_card);
            }
            else if (pos % 4 == 3)
            {
                if (input_card == "C3")
                {
                    C3_player = 'W';
                }
                W.push_back(input_card);
            }
            pos += 1;
        }
    }

    cout << "Enter Number :";
    cin >> command;
    if (command == 1)
    {
        cout << C3_player << endl;
    }
    else if (command == 2)
    {
        display();
    }
    else if (command = 3)
    {
    }
}