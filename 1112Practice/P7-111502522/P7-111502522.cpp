/*
Practice 7
Name: 劉俊吾
Student Number: 111502522
Course 2023-CE1004-A
*/
#include <iostream>
#include <map>
using namespace std;
class Species
{
private:
    const string name;
    string category;
    int number;

public:
    Species()
        : name("human"), category("Primates"), number(100) {}
    Species(const string new_name, const string new_category, int new_number)
        : name(new_name), category(new_category), number(new_number) {}
    ~Species()
    {
        cout << "species " << name << " is deleted" << endl;
    }
    string getName() const
    {
        return name;
    }
    string getCate() const
    {
        return category;
    }
    int getNum() const
    {
        return number;
    }
    void setCate(string new_category)
    {
        this->category = new_category;
    }
    void setNum(int new_number)
    {
        this->number = new_number;
    }
    void showInfo() const
    {
        cout << name << " " << category << " " << number << endl;
    }
};
int main()
{
    Species s1;

    string name;
    string category;
    int number;

    cout << "please input species2 info(name/category/number)" << endl;
    cin >> name >> category >> number;
    Species s2(name, category, number);

    int command;
    int case1_choice;
    while (1)
    {
        cout << "1.change species info 2.show all species info 3.exit" << endl;
        cin >> command;
        switch (command)
        {
        case 1:
            cout << "which species would you like to change(1/2)?" << endl;
            cin >> case1_choice;
            cout << "input new info (category/number)" << endl;
            cin >> category >> number;
            switch (case1_choice)
            {
            case 1:
            {
                s1.setCate(category);
                s1.setNum(number);
                break;
            }
            case 2:
            {
                s2.setCate(category);
                s2.setNum(number);
                break;
            }
            }
            break;
        case 2:
            s1.showInfo();
            s2.showInfo();
            break;
        case 3:
            return 0;
        }
    }
}