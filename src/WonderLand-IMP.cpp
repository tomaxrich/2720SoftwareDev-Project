#include "WonderLand.h"
#include "Room.h"
#include <array>
#include <iostream>
#include <cstdlib>

using namespace std;

void WonderLand::setlocation(int x, int y)
{
    int temp1 = x;
    int temp2 = y;
    CurrentLocationX = temp1;
    CurrentLocationY = temp2;
    if(temp1 == 10 && temp2 == 10){
        cout << "Moving to next room! You can no longer go back..." << endl;
        CurrentRoom = CurrentRoom + 1;
        CurrentLocationX = 0;
        CurrentLocationY = 0;
        }

    else
        return;

};

int WonderLand::getlocationX()
{
    return CurrentLocationX;
};
int WonderLand::getlocationY()
{
    return CurrentLocationY;
};
int WonderLand::getRoom()
{
    return CurrentRoom;
};
void WonderLand::setRoom(int i)
{
    CurrentRoom = i;
}
//create a room in main, then set wonderland
void WonderLand::setWonderland(int siZe, int roomnum)
{
    int temp1= siZe - 1;
    //What the actual fuck is wrong here...
    int temp2 = roomnum;
    NumRooms[temp1] = temp2;
};
WonderLand::WonderLand()
{

};
