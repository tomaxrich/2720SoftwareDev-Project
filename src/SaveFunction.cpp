#include "SaveFunction.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "WonderLand.h"
#include "Room.h"
#include "MapInterface.h"

using namespace std;

void save::SAVE(WonderLand& w)
{
    cout << "Please input the name of your save with a .txt extension\n";
    string temp1;
    cin >> temp1;
      ofstream myfile(temp1);
  if (myfile.is_open())
  {
    int x = w.getlocationX();
    int y = w.getlocationY();
    int ROOM = w.getRoom();
    myfile << x;
    myfile << " " << y;
    myfile << " " << ROOM << endl;
    myfile.close();
  }
  else cout << "Unable to open file";
};

void save::LOADX(WonderLand& w)
{
    cout << "Please input the name of your save with a .txt extension\n";
    string temp1;
    cin >> temp1;
    string line;
  ifstream inFile(temp1);
  int xcoord, ycoord, rm;
  if (inFile.is_open())
  {
    while (!inFile.eof())
    {
    inFile>>xcoord;
    inFile>>ycoord;
    inFile>>rm;
    }
    w.setlocation(xcoord, ycoord);
    w.setRoom(rm);
    inFile.close();
  }

  else cout << "Unable to open file";

  return ;
};

