#include <iostream>
using namespace std;
class area
{
private:
    string name;
    int w, h;

public:
    area(string name, int w, int h)
    {
        this->name = name;
        this->w = w;
        this->h = h;
    }
    int get_area_size()
    {
        return w * h;
    }
    bool operator>(area &another)
    {
        return this->get_area_size() > another.get_area_size();
    }
    bool operator>(int constant)
    {
        return constant > this->get_area_size();
    }
    bool operator<(int constant)
    {
        return constant < this->get_area_size();
    }
};
/* bool operator>(int constant, area &another)
{
    return constant > another.get_area_size();
}
bool operator<(int constant, area &another)
{
    return constant < another.get_area_size();
}
bool operator>(area &another, int constant)
{
    return constant < another.get_area_size();
}
bool operator<(area &another, int constant)
{
    return constant > another.get_area_size();
}
 */
int main()
{
    area a1("a1", 5, 8);
    area a2("a2", 5, 9);
    cout << (a1 > 10);
}
