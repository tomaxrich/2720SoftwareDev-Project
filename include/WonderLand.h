#ifndef WONDERLAND_H
#define WONDERLAND_H
#include "Room.h"
using namespace std;

class WonderLand{
private:
    int CurrentLocationX;
    int CurrentLocationY;
    int CurrentRoom;
    int NumRooms[];
public:
    void setlocation(int x, int y);
    int getlocationX();
    int getlocationY();
    int getRoom();
    void setRoom(int i);
    void setWonderland(int siZe, int roomnum);
    friend class MapInterface;
    WonderLand();

};
#endif // WONDERLAND_H
