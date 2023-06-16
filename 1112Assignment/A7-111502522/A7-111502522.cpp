/*
Assignment 7
Name: 劉俊吾
Student Number: 111502522
Course 2023-CE1002-A
*/
#include <iostream>
#include <map>
using namespace std;
class Behavior
{
private:
    int feeding_habits;
    string activity_time;

public:
    Behavior(int new_feeding_habits, string new_activity_time)
    {
        this->feeding_habits = new_feeding_habits;
        this->activity_time = new_activity_time;
    }
    Behavior()
    {
        this->feeding_habits = 2;
        this->activity_time = "day";
    }
    void setFeeding(int new_feeding_habits)
    {
        this->feeding_habits = new_feeding_habits;
    }
    void setAct(string new_activity_time)
    {
        this->activity_time = new_activity_time;
    }
    int getFeed() const
    {
        return feeding_habits;
    }
    string getAct() const
    {
        return activity_time;
    }
};
class Species
{
private:
    const string name;
    string category;
    Behavior behavior;
    int number;

    int feeding_habits;
    string activity_time;

public:
    Species()
        : name("human"), category("Primates"), number(100) {}
    Species(const string new_name, const string new_category, const Behavior new_behavior, int new_number)
        : name(new_name), category(new_category), behavior(new_behavior), number(new_number) {}
    Species(const string new_name, const string new_category, const int new_feeding_habits, const string new_activity_time, const int new_number)
        : name(new_name), category(new_category), behavior(new_feeding_habits, new_activity_time), number(new_number) {}
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
    Behavior getBeh() const
    {
        return behavior;
    }
    int getNum() const
    {
        return number;
    }
    void setCate(string new_category)
    {
        this->category = new_category;
    }
    void setBeh(Behavior new_behavior)
    {
        this->behavior = new_behavior;
    }
    void setNum(int new_number)
    {
        this->number = new_number;
    }
    void showInfo() const
    {
        cout << name << " " << category << " ";
        switch (behavior.getFeed())
        {
        case 0:
            cout << "herbivorous " << behavior.getAct() << " " << number << endl;
            break;
        case 1:
            cout << "carnivorous " << behavior.getAct() << " " << number << endl;
            break;
        case 2:
            cout << "omnivorous " << behavior.getAct() << " " << number << endl;
            break;
        }
    }
};
int main()
{
    Species s1;

    int feeding_habits;
    string activity_time;
    string name;
    string category;
    int number;

    cout << "please input behavior info (feeding_habits/activity_time)" << endl;
    cin >> feeding_habits >> activity_time;
    Behavior s2_behavior(feeding_habits, activity_time);

    cout << "please input species2 info(name/category/number)" << endl;
    cin >> name >> category >> number;
    Species s2(name, category, feeding_habits, activity_time, number);

    cout << "please input species3 info(name/category/feeding_habits/activity_time/number)" << endl;
    cin >> name >> category >> feeding_habits >> activity_time >> number;
    Species s3(name, category, feeding_habits, activity_time, number);

    int command;
    int case1_choice;
    while (1)
    {
        cout << "1.change species info 2.show all species info 3.exit" << endl;
        cin >> command;
        switch (command)
        {
        case 1:
            cout << "which species would you like to change(1/2/3)?" << endl;
            cin >> case1_choice;
            cout << "input new info (category/feeding_habits/activity_time/number)" << endl;
            cin >> category >> feeding_habits >> activity_time >> number;
            switch (case1_choice)
            {
            case 1:
            {
                s1.setCate(category);
                Behavior new_behavior(feeding_habits, activity_time);
                s1.setBeh(new_behavior);
                s1.setNum(number);
                break;
            }
            case 2:
            {
                s2.setCate(category);
                Behavior new_behavior(feeding_habits, activity_time);
                s2.setBeh(new_behavior);
                s2.setNum(number);
                break;
            }
            case 3:
            {
                s3.setCate(category);
                Behavior new_behavior(feeding_habits, activity_time);
                s3.setBeh(new_behavior);
                s3.setNum(number);
                break;
            }
            }
            break;
        case 2:
            s1.showInfo();
            s2.showInfo();
            s3.showInfo();
            break;
        case 3:
            return 0;
        }
    }
}