/**
@file Room.h
@author Thomas Richardson
*/

#ifndef ROOM_H
#define ROOM_H
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include "Board.h"

class Room: public Board{
public:
    vector<int> NumEnemies;
    vector<int> NumItems;
    vector<int> NumPuzzles;
    string Story;

    /**
    @pre enemies exist
    @post returns number of enemies in room
    @return int
    */
    int getEnemies();

    /**
    @pre items exist
    @post returns number of items in room
    @return int
    */
    int getItems();

    /**
    @pre puzzles exist
    @post returns number of puzzles in room
    @return int
    */
    int getPuzzles();

    /**
    @pre location exists
    @post returns if you've stepped on an item, enemy, or puzzle
    @param int x for x-coord, int y for y-coord
    @return int
    */
    int checkLocation(int x, int y);

    /**
    @pre location exists, 0=<x&y<=10
    @post puts an enemy in a location (x,y)
    @param int x for x-coord, int y for y-coord
    */
    void setEnemies(int x, int y);

    /**
    @pre location exists, 0=<x&y<=10
    @post puts an item in a location (x,y)
    @param int x for x-coord, int y for y-coord
    */
    void setItems(int x, int y);

    /**
    @pre location exists, 0=<x&y<=10
    @post puts a puzzle in a location (x,y)
    @param int x for x-coord, int y for y-coord
    */
    void setPuzzles(int x, int y);

    /**
    @pre none
    @post displays story content
    */
    string DisplayStory();

    Room();

    /**
    @pre 0=<sizeY&sizeX<=10
    @post creates a room
    @param sizex is x-coord, sizey is y-coord, string is the story content
    */
    Room(int SizeX, int SizeY, string story);

    friend class MapInterface;

};
#endif // ROOM_H
