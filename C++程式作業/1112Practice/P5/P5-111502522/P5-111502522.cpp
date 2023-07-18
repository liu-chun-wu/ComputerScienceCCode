/*
Practice 5
Name: 劉俊吾
Student Number: 111502522
Course 2023-CE1004-A
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
class University
{
public:
    University(int school_code, string school_name,
               int department_code, string department_name, string day_or_night, string level, int student_count, int teacher_count, int graduates_last_year, string city_name, string system_type)
    {
        this->school_code = school_code;
        this->school_name = school_name;
        this->department_code = department_code;
        this->department_name = department_name;
        this->day_or_night = day_or_night;
        this->level = level;
        this->student_count = student_count;
        this->teacher_count = teacher_count;
        this->graduates_last_year = graduates_last_year;
        this->city_name = city_name;
        this->system_type = system_type;
    }
    int school_code;
    string school_name;
    int department_code;
    string department_name;
    string day_or_night;
    string level;
    int student_count;
    int teacher_count;
    int graduates_last_year;
    string city_name;
    string system_type;
    void print()
    {
        cout << school_name << "\t" << department_name << "\t" << graduates_last_year << "\n";
    }
};
int main()
{
    ifstream input("input.txt");
    string useless;
    int school_code;
    string school_name;
    int department_code;
    string department_name;
    string day_or_night;
    string level;
    int student_count;
    int teacher_count;
    int graduates_last_year;
    string city_name;
    string system_type;
    vector<University> universities;
    for (int i = 0; i < 15; i++)
    {
        input >> useless;
    }
    while (input >> school_code)
    {
        input >> school_name >> department_code >> department_name >> day_or_night >> day_or_night >> level >> level >> student_count >> teacher_count >> graduates_last_year >> city_name >> city_name >> system_type >> system_type;
        University new_university(school_code, school_name, department_code, department_name, day_or_night, level, student_count, teacher_count, graduates_last_year, city_name, system_type);
        universities.push_back(new_university);
    }
    for (int i = 0; i < universities.size(); i++)
    {
        universities[i].print();
    }
    input.close();
    return 0;
}