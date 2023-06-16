
#include <iostream>
#include <vector>
using namespace std;

class pokemon
{
private:
    int hp = 0;
    int atk = 0;
    double power = 0.0;

public:
    pokemon(int hp, int atk, double power)
    {
        this->hp = hp;
        this->atk = atk;
        this->power = power;
    }
    int me_attack()
    {
        if (power == 1.0)
        {
            power = 0.0;
            return atk * 3;
        }
        else
        {
            power += 0.25;
            return atk;
        }
    }
    int assistant_attack()
    {
        if (power == 1.0)
        {
            hp += atk * 2 * 0.2;
            power = 0.0;
            return atk * 2;
        }
        else
        {
            power += 0.25;
            hp += atk * 0.2;
            return atk;
        }
    }
    void be_attack(int hurt)
    {
        hp = hp - hurt;
    }
    int check_alive()
    {
        if (hp <= 0)
        {
            return 0;
        }
        else if (hp > 0)
        {
            return 1;
        }
    }
    void print()
    {
        cout << "Hp:" << hp << " Attack:" << atk << " Power:" << power << endl;
    }
};
int round;
string fight(pokemon &assistant, vector<pokemon> &list_pokemon)
{
    int count = 0;
    round = 0;
    while (1)
    {
        round++;

        assistant.be_attack(list_pokemon[count].me_attack());
        if (assistant.check_alive() == 0)
        {
            return "me";
        }
        round++;
        list_pokemon[count].be_attack(assistant.assistant_attack());
        if (list_pokemon[count].check_alive() == 0 && count != list_pokemon.size() - 1)
        {
            count++;
        }
        else if (list_pokemon[count].check_alive() == 0 && count == list_pokemon.size() - 1)
        {
            return "assistant";
        }
    }
}
int main()
{
    int hp;
    int atk;
    double power;
    cin >> hp >> atk >> power;
    pokemon assistant(hp, atk, power);
    int n;
    cin >> n;
    vector<pokemon> list_pokemon;
    for (int i = 0; i < n; i++)
    {
        cin >> hp >> atk >> power;
        pokemon me(hp, atk, power);
        list_pokemon.push_back(me);
    }
    cout << "Function Choose:" << endl;
    int command;
    cin >> command;
    string result;
    if (command == 1)
    {
        for (int i = 0; i < list_pokemon.size(); i++)
        {
            list_pokemon[i].print();
        }
    }
    else if (command == 2)
    {
        result = fight(assistant, list_pokemon);
        if (result == "assistant")
        {
            cout << "You lose! Using " << round << " rounds!" << endl;
        }
        else if (result == "me")
        {
            cout << "You win! Using " << round << " rounds!" << endl;
        }
    }
    else if (command == 3)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    return 0;
}