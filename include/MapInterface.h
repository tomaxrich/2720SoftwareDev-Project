/**
@file MapInterface.h
@author Thomas Richardson
*/

#ifndef MAPINTERFACE_H
#define MAPINTERFACE_H
#include <string>
#include <cstdlib>

using namespace std;
class WonderLand;
class Room;
class MapInterface{
public:
    /**
    @pre wonderland exists
    @post moves your location within the room
    @param int is direction to move, p represents the map
    */
    void move(int i, WonderLand& p);

    /**
    @pre wonderland exists
    @post returns which room and coordinates of your location
    @param p represents the map, b is the room you're in
    */
    void returnInfo(WonderLand& p, Room& b);

};
#endif
