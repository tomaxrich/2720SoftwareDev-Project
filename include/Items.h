/**
@file Puzzles.cpp
@author Anshul Abraham
*/
#ifndef ITEMS_H_INCLUDED
#define ITEMS_H_INCLUDED
#include "Characters.h"

using namespace std;

class Items
{
public:
    /**
    @pre none
    @post creates Items object(Default)
    */
    Items();
    /**
    @pre Can be Found on a Map
    @post Increases Your HEALTH
    @param Character Class
    */
    int EnlargingFood(Characters);
    /**
    @pre Can be Found on a Map
    @post Decreases Your HEALTH
    @param Character Class
    */
    int ShrinkingFood(Characters);
    /**
    @pre Can be Found on a Map
    @post Increases Your STRENGTH
    @param Character Class
    */
    int HatterHat(Characters);
    /**
    @pre Can be Found on a Map
    @post Increases Your STRENGTH
    @param Character Class
    */
    int Key(Characters);
    /**
    @pre Can be Found on a Map
    @post Increases Your Strength and Health
    @param Character Class
    */
    int HatterSword(Characters);

private:
    int efood;
    int sfood;
    int hat;
    int key;
    int sword;

};



#endif // ITEMS_H_INCLUDED
