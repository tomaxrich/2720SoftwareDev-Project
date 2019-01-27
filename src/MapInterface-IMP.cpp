#include "MapInterface.h"
#include "SaveFunction.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include "WonderLand.h"

using namespace std;

void MapInterface::move(int i, WonderLand& p)
{
    if(i == 1){
        if(p.getlocationX() != 10){
            int temp1 = p.getlocationX();
            int temp2 = p.getlocationY();
            p.setlocation((temp1 + 1),temp2);}
        else{
            int temp2 = p.getlocationY();
            cout << "you hit a wall\n";
            p.setlocation(10, temp2);
            return;
    }}
    else{
        if(i == 2){
            if(p.getlocationY() != 10){
                int temp2 = p.getlocationX();
                int temp5 = p.getlocationY();
                p.setlocation(temp2,temp5 + 1);}
            else{
                int temp2 = p.getlocationX();
                cout << "you hit a wall\n";
                p.setlocation(temp2, 10);
                return;}
            //go Right
        }
        else{
            if(i == 3){
                if(p.getlocationY() != 0){
                int temp3 = p.getlocationX();
                int temp6 = p.getlocationY();
                p.setlocation(temp3,temp6-1);
                }else{
                    int temp3 = p.getlocationX();
                    cout << "you hit a wall\n";
                    p.setlocation(temp3, 0);
                    return;}
            //go Left
            }
            else{
                if(i == 4){
                    if(p.getlocationX() != 0){
                    int temp4 = p.getlocationX();
                    int temp7 = p.getlocationY();
                    p.setlocation((temp4 - 1),temp7);
                    }else{
                        int temp7 = p.getlocationY();
                        cout << "you hit a wall\n";
                        p.setlocation(0, temp7);
                        return;}
                //go back
                }
                else
                {
                    cout << "please enter a valid entry";
                }
                    return;
            }
        }
}

}

void MapInterface::returnInfo(WonderLand& p, Room& b)
{
    save s;
    cout << "Would you like to Save?\n Type 1 for yes \n Type 2 for no\n Type 3 to load an existing save\n";
    int YES;
    cin >> YES;
    if(YES == 1){
        s.SAVE(p);
    }else if(YES == 3){
        s.LOADX(p);
    }

    int temp = p.getRoom();
    int temp2 = p.getlocationX();
    int temp3 = p.getlocationY();
    int temp4 = b.getEnemies();
    int temp5 = b.getItems();
    int temp6 = b.getPuzzles();
    cout<< "You are in Room " << temp << "\n";
    cout << "Your current location is: " << temp2 << "," << temp3 << endl;
    cout << "There are " ;
    cout << temp4 ;
    cout << " Enemies, ";
    cout << temp5 ;
    cout <<" Items, and ";
    cout << temp6 ;
    cout << " Puzzles \n";

}


