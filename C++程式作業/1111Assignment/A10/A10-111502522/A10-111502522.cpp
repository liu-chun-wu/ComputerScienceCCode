/*
Assignment 10
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1001-A
*/
#include <iostream>
#include <vector>
using namespace std;
vector<string> answer;
vector<string> original_input;
int Identifier = 0, Number = 0, Special_Symbol = 0;
int count, line;
int type_of_char(char token)
{
    int i;
    char special[24] = {'+', '-', '*', '/', '>', '<', '=', '%', '&', '|', '^', '\'', '\"', '.', ',', '(', ')',
                        '[', ']', '{', '}', '!', ':', ';'};
    for (i = 0; i < 24; i++)
    {
        if (token == special[i])
        {
            return 3;
        }
    }
    if (token == ' ')
    {
        return 0;
    }
    else if ((int)token == (int)'_' || ((int)token >= int('A') && (int)token <= (int)'Z') || ((int)token >= (int)'a' && (int)token <= int('z')))
    {
        return 1;
    }
    else if ((int)token >= (int)'0' && (int)token <= (int)'9')
    {
        return 2;
    }
    else
    {
        return 4;
    }
}
void get_special()
{
    string token = "";
    Special_Symbol += 1;
    char special_left[9] = {'+', '-', '+', '<', '>', '=', '!', '&', '|'};
    char special_right[9] = {'+', '-', '=', '=', '=', '=', '=', '&', '|'};
    if (count + 1 <= original_input[line].size() - 1 && type_of_char(original_input[line][count]) == 3 && type_of_char(original_input[line][count + 1]) == 3)
    {
        for (int i = 0; i <= 8; i++)
        {
            if (original_input[line][count] == special_left[i] && original_input[line][count + 1] == special_right[i])
            {
                token += original_input[line][count];
                token += original_input[line][count + 1];
                answer.push_back(token);
                count += 2;
                return;
            }
        }
    }
    token = original_input[line][count];
    answer.push_back(token);
    count += 1;
    return;
}
void get_number()
{
    string token = "";
    Number += 1;
    while (count <= original_input[line].size() - 1)
    {
        if (type_of_char(original_input[line][count]) == 2)
        {
            if (count == original_input[line].size() - 1)
            {
                token += original_input[line][count];
                answer.push_back(token);
                count += 1;
                break;
            }
            else
            {
                token += original_input[line][count];
                count += 1;
            }
        }
        else
        {
            answer.push_back(token);
            break;
        }
    }
    return;
}
void get_identifier()
{
    string token = "";
    Identifier += 1;
    while (count <= original_input[line].size() - 1)
    {
        if (type_of_char(original_input[line][count]) == 1 || type_of_char(original_input[line][count]) == 2)
        {
            if (count == original_input[line].size() - 1)
            {
                token += original_input[line][count];
                answer.push_back(token);
                count += 2;
                break;
            }
            else
            {
                token += original_input[line][count];
                count += 1;
            }
        }
        else
        {
            answer.push_back(token);
            break;
        }
    }
    return;
}
int main()
{
    int i, j;
    string token, command;
    while (1)
    {
        getline(cin, token);
        if (token == "END_OF_FILE")
        {
            break;
        }
        original_input.push_back(token);
    }
    for (i = 0; i <= original_input.size() - 1; i++)
    {
        line = i;
        count = 0;
        while (count <= original_input[line].size() - 1)
        {
            switch (type_of_char(original_input[line][count]))
            {
            case 0:
                count += 1;
                break;
            case 1:
                get_identifier();
                break;
            case 2:
                get_number();
                break;
            case 3:
                get_special();
                break;
            case 4:
                token = original_input[line][count];
                answer.push_back(token);
                count += 1;
                break;
            }
        }
    }
    while (1)
    {
        cin >> command;
        if (command == "0")
        {
            break;
        }
        else if (command == "1")
        {
            cout << "Total number of tokens: " << answer.size() << endl;
            continue;
        }
        else if (command == "2")
        {
            for (i = 0; i < answer.size(); i++)
            {
                cout << "[" << answer[i] << "]" << endl;
            }
            continue;
        }
        else if (command == "3")
        {
            cout << "Identifier: " << Identifier << ", "
                 << "Number: " << Number << ", "
                 << "Special Symbol: " << Special_Symbol << endl;
            continue;
        }
        cout << "Invalid command." << endl;
    }
}