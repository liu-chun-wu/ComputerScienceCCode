/*
Practice 10
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1003-A
*/
#include <iostream>
#include <vector>
using namespace std;

int identify_type(string token)
{
    int i;
    string special[33] = {"+", "-", "*", "/", ">", "<", "=", "%", "&", "|", "^", "\"", "\'", ".", ",", "(", ")",
                          "[", "]", "{", "}", "!", ":", ";", "++", "--", "+=", "<=", ">=", "==", "!=", "&&", "||"};
    for (i = 0; i < 33; i++)
    {
        if (token == special[i])
        {
            return 3;
        }
    }

    for (i = 0; i < token.size(); i++)
    {
        if ((int)token[i] < (int)'0' || (int)token[i] > (int)'9')
        {
            return 1;
        }
    }
    return 2;
}
int main()
{
    int i;
    int Identifier = 0, Number = 0, Special_Symbol = 0;
    vector<string> g_token_list;
    string token;
    while (1)
    {
        cin >> token;
        if (token == "END_OF_FILE")
        {
            break;
        }
        g_token_list.push_back(token);
    }
    for (i = 0; i < g_token_list.size(); i++)
    {
        switch (identify_type(g_token_list[i]))
        {
        case 1:
            Identifier += 1;
            break;
        case 2:
            Number += 1;
            break;
        case 3:
            Special_Symbol += 1;
            break;
        }
    }
    while (1)
    {
        cin >> token;
        if (token == "0")
        {
            break;
        }
        else if (token == "1")
        {
            cout << "Total number of tokens: " << g_token_list.size() << endl;
            continue;
        }
        else if (token == "2")
        {
            for (i = 0; i < g_token_list.size(); i++)
            {
                cout << "[" << g_token_list[i] << "]" << endl;
            }
            continue;
        }
        else if (token == "3")
        {
            cout << "Identifier: " << Identifier << ", "
                 << "Number: " << Number << ", "
                 << "Special Symbol: " << Special_Symbol << endl;
            continue;
        }
        cout << "Invalid command." << endl;
    }
}
