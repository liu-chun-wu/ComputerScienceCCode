/*
Practice 6
Name: 劉俊吾
Student Number: 111502522
Course 2023-CE1004-A
*/
#include <iostream>
#include <vector>
using namespace std;
class Transaction
{
public:
    Transaction(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    int getIncome()
    {
        return income;
    }
    int getPay()
    {
        return pay;
    }
    void setIncome(int income)
    {
        this->income = income;
    }
    void setPay(int pay)
    {
        this->pay = pay;
    }

private:
    string name;
    int income = 0;
    int pay = 0;
};
int main()
{
    string name;
    int income;
    int pay;
    int total = 0;
    vector<Transaction> list_Transaction;

    int command;
    while (1)
    {
        cin >> command;
        switch (command)
        {
        case 1:
        {
            cin >> name >> income;
            Transaction new_Transaction(name);
            new_Transaction.setIncome(income);
            list_Transaction.push_back(new_Transaction);
            total += income;
        }
        break;
        case 2:
        {
            cin >> name >> pay;
            Transaction new_Transaction(name);
            new_Transaction.setPay(pay);
            list_Transaction.push_back(new_Transaction);
            total -= pay;
        }
        break;
        case 3:
        {
            cout << "Total: " << total << "\n";
        }
        break;
        case 4:
        {
            return 0;
        }
        break;
        default:
        {
            cout << "Invalid Operation" << '\n';
        }
        break;
        }
    }
}