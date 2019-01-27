#include "Room.h"
#include <cstdlib>
#include <vector>

using namespace std;

int Room::checkLocation(int x, int y)
{
    int temp1 = x;
    int temp2 = y;
    //this needs serious work
    if(Layout[temp1][temp2] < 4)
        {
        if(Layout[temp1][temp2] == 1 /*Item*/){
         return 1;
        }
        else{
            if(Layout[temp1][temp2] == 2 /*Enemy*/){
                return 2;
                }
            else
            if(Layout[temp1][temp2] == 3){
                return 3 /*Puzzle*/;}
                else
                    return 0;
        }}
        else
            return 0;
};

void Room::setEnemies(int x, int y)
{
    Layout[x][y] = 2;
    NumEnemies.push_back(1);
};

void Room::setItems(int x, int y)
{
    Layout[x][y] = 1;
    NumItems.push_back(1);
};

void Room::setPuzzles(int x, int y)
{
    Layout[x][y] = 3;
    NumPuzzles.push_back(1);
};

string Room::DisplayStory()
{
    return Story;
};

Room::Room(int SizeX, int SizeY, string story)
{
    Story = story;
    Layout[SizeX][SizeY];
};
int Room::getEnemies()
{
    int temp1 = NumEnemies.size();
    return temp1;
};

int Room::getItems()
{
    int temp1 = NumItems.size();
    return temp1;
};

int Room::getPuzzles()
{
    int temp1 = NumPuzzles.size();
    return temp1;
};
Room::Room()
{

};

