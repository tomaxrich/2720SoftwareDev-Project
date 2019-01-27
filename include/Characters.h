/**
@file Characters.h
@author Nicole Vachon
*/

#ifndef CHARACTERS_H_INCLUDED
#define CHARACTERS_H_INCLUDED
#include "MapInterface.h"
#include <string>

using namespace std;

class MapInterface1
{
    public:
        MapInterface1(){};
        double getInfo(){return 0.0;};
};

class Characters
{
public:
    /**
    @pre none
    @post creates Character object
    @param int to signify which Character
    */
    Characters(int);

    /**
    @pre none
    @post creates enemy character object
    @param string for enemy name and pointer to MapInterface for their location
    */
    Characters(string);
    bool interact();

    /**
    @pre character is initiated  and parameter is of type MapInterface
    @post changes location of Character
    @param MapInterface
    @return bool
    */
    bool travel(MapInterface&);

    /**
    @pre both characters must be initiated
    @post reduces both healths until one reaches zero and the other wins
    @param enemy character object
    @return bool to signify successful fight
    */
    bool fight(Characters);

    /**
    @pre character is initiated and name is set
    @post gets name
    @return string
    */
    string getName();

    /**
    @pre character is initiated and location is set
    @post gets location value
    @return double
    */
    double getLocation();

    /**
    @pre character is initiated and health is set
    @post gets health value
    @return int
    */
    int getHealth();

    /**
    @pre character is initiated and strength is set
    @post gets strength value
    @return int
    */
    int getStrength();
    /**
    @pre character is initiated and health is set
    @post health is diminished by parameter
    */
    void loseHealth(int);
    /**
    @pre character is initiated and health is set
    @post health is increased by parameter
    */
    void gainHealth(int);
    /**
    @pre character is initiated and strength is set
    @post strength is increased by parameter
    */
    void gainStrength(int);

private:
    string name;
    double location;
    int health;
    int strength;

};

#endif // CHARACTERS_H_INCLUDED
