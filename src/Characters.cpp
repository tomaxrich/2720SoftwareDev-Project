#include "Characters.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



Characters::Characters(int choice)
{
    if (choice ==0)
        name = "Alice";
    else if (choice == 1)
        name = "The Mad Hatter";
    else if (choice == 2)
        name = "The White Queen";
    location = 0.0;
    health = 50;
    strength = 10;
}


Characters::Characters(string setName)
{
    name = setName;
    //location = place.returnInfo();
    health =50;
    if (name=="Jabberwaki")
        strength = 15;
    if (name=="Red Queen")
        strength = 10;
    else
        strength = 5;
}

bool Characters::fight(Characters enemy)
{
    while (this->health >=0 && enemy.health >=0)
    {
        int roll1;
        int roll2 = rand() %10+1;
        cout<<"type a number between 1 and 10. If the difference between your \nnumber and the enemy's number is bigger than 3, you hurt them, \notherwise they hurt you.";
        cin>>roll1;
        while (roll1 > 10 || roll1 < 1)
        {
            cout<<"Choose a number between 1 and 10";
            cin>>roll1;
        }
        if (abs(roll1 - roll2) >= 3)
        {
            cout<<"You hurt the enemy!\n"<<roll2<<endl;
            enemy.health -= (roll1);
        }
        else
        {
            cout<<"The enemy hurt you!\n"<<roll2<<endl;
            this->health -= (roll2);
        }
    }
    if (this->health <=0)
    {
        cout<<"You died :( \n";
        //end
    }
    else if (enemy.health <=0)
        cout<<"You killed the enemy :) \n";
    return true;
}

int Characters::getHealth()
{
    return health;
}

double Characters::getLocation()
{
    return location;
}

string Characters::getName()
{
    return name;
}

int Characters::getStrength()
{
    return strength;
}

bool Characters::interact()
{
    return true;
}


void Characters::loseHealth(int loss)
{
    this->health -= loss;
}
void Characters::gainHealth(int gain)
{
    this->health += gain;
}
void Characters::gainStrength(int gain)
{
    this->strength += gain;
}
