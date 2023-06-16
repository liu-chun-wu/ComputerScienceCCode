/*
Assignment 6
Name: 劉俊吾
Student Number: 111502522
Course 2023-CE1002-A
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
    string max_pay_name;
    int max_pay_value = 0;
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
            if (pay > max_pay_value)
            {
                max_pay_value = pay;
                max_pay_name = name;
            }
        }
        break;
        case 3:
        {
            for (auto i : list_Transaction)
            {
                cout << i.getName() << " " << i.getIncome() << " " << i.getPay() << "\n";
            }
            cout << "Total: " << total << "\n";
        }
        break;
        case 4:
        {
            cout << max_pay_name << " " << 0 << " " << max_pay_value << "\n";
        }
        break;
        case 5:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid Operation" << '\n';
        }
        break;
        }
    }
}