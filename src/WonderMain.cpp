#include "Helpers.h"
#include "Characters.h"
#include "MapInterface.h"
#include "puzzles.h"
#include "Items.h"
#include "Room.h"
#include "WonderLand.h"
#include <iostream>



using namespace std;
double temp55;
int main()
{
    WonderLand WonderFuck;
    Items WonderItem;
    Puzzles WonderPuzzle;
    cout<< "Welcome to Wonderland. Let's play a game...\n";
    int charact;

    cout << "Who would you like to play as?"<<endl<<"Please type in 0 for Alice, 1 for the Mad Hatter, or 2 for the White Queen." << endl;
    cin >> charact;
    while (charact >2 || charact <0)
    {
        cout << "That was not valid."<<endl<<"Please type in 0 for Alice, 1 for the Mad Hatter, or 2 for the White Queen." << endl;
        cin >> charact;
    }
    Characters MainChoice = Characters(charact);
    cout << "You've chosen " << MainChoice.getName()<<endl;

    cout << "Now that we can begin!\n";
    MapInterface a1;

    WonderFuck.setlocation(0,0);
    WonderFuck.setRoom(0);
//Room 0
    Room RabitHole(10, 10, "You fell down a f***ing hole\n");
    RabitHole.DisplayStory();
    WonderFuck.setWonderland(1, 1);
    RabitHole.setPuzzles(5,5);
    RabitHole.setItems(6,9);
    RabitHole.setEnemies(1,7);
        Helpers Pillar("Caterpillar");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, RabitHole);
        }
    else if (response == 1)
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);
        //int temp1 = RabitHole.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
                //a1.returnInfo(WonderFuck, RabitHole);
//Room 1
    do{
    Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, RabitHole);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        RabitHole.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = RabitHole.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.Key(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Cards");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle1();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}

        //a1.returnInfo(WonderFuck, RabitHole);
    }
while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );

    //check
    //double temp55;

    //ROOM 2!!!!!!!!

    Room CatForest(10, 10, "CATS!!!! EVERYWHERE!!!!\n");
    CatForest.DisplayStory();
    WonderFuck.setWonderland(2,2);
    CatForest.setPuzzles(6,5);
    CatForest.setItems(6,2);
    CatForest.setEnemies(8,7);
        do{
Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, CatForest);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        CatForest.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = CatForest.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.EnlargingFood(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Cards");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle2();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}

}
while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );
//Room 3
    Room BigHouse(10, 10, "LOL small person in a big house?!\n");
    BigHouse.DisplayStory();
    WonderFuck.setWonderland(3,3);
    BigHouse.setPuzzles(3,5);
    BigHouse.setItems(9,9);
    BigHouse.setEnemies(1,3);

        do{
    Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, BigHouse);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        BigHouse.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = BigHouse.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.EnlargingFood(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Cards");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle3();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}

}
 while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );
 //Room 4
    Room NewWorld(10, 10, "it's a brave new world out there bud\n");
    NewWorld.DisplayStory();
    WonderFuck.setWonderland(4,4);
    NewWorld.setPuzzles(5,5);
    NewWorld.setItems(6,9);
    NewWorld.setEnemies(1,7);

        do{
    Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, NewWorld);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        NewWorld.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = NewWorld.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.EnlargingFood(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Cards");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle4();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}

}
 while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );
 //Room 5
    Room TeaTime(10, 10, "We are almost late?! Late for TEA!!!\n");
    TeaTime.DisplayStory();
    WonderFuck.setWonderland(5,5);
    TeaTime.setPuzzles(5,5);
    TeaTime.setItems(6,9);
    TeaTime.setEnemies(1,7);

        do{
   Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, TeaTime);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        TeaTime.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = TeaTime.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.EnlargingFood(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Cards");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle5();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}
}
 while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );
//Room 6
    Room Forest(10, 10, " I can't see anything\n");
    Forest.DisplayStory();
    WonderFuck.setWonderland(6,6);
    Forest.setPuzzles(5,5);
    Forest.setItems(6,9);
    Forest.setEnemies(1,7);

        do{
   Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, Forest);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        Forest.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = Forest.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.HatterHat(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Cards");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle6();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}
}
 while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );
 //Room 7
    Room Jabbawaki(10, 10, "Your Doom awaits\n");
    Jabbawaki.DisplayStory();
    WonderFuck.setWonderland(7,7);
    Jabbawaki.setPuzzles(5,5);
    Jabbawaki.setItems(6,9);
    Jabbawaki.setEnemies(10,10);

        do{
   Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, Jabbawaki);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        Jabbawaki.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = Jabbawaki.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.HatterSword(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Cards");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle7();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}
}
 while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );
 //Room 8
    Room Castle(10, 10, "Honestly didn't think you'd make it this far...");
    Castle.DisplayStory();
    WonderFuck.setWonderland(8,8);
    Castle.setPuzzles(5,5);
    Castle.setItems(6,9);
    Castle.setEnemies(10,10);


        do{
     Helpers Pillar("Cheshire");
    int response = Pillar.speak();
    while (response >2 || response <0)
    {
        cout<<"That was not a valid action, please try again.\n"<<endl;
        cin>>response;
    }
    if (response ==2)
    {
        Characters Enemy("CardSoldier");
        MainChoice.fight(Enemy);
        //cout<< "There are no enemies to fight. please choose another action.";
        //cin>>response;
    }
    if (response == 0){
        //MainChoice.interact();
        a1.returnInfo(WonderFuck, Castle);
        }
    if (response == 1){
        cout << "Please indicate which direction you would like to travel!\n";
        cout << "1: for forward\n";
        cout << "2: for right\n";
        cout << "3: for left\n";
        cout << "4: for backward\n";
        int temp;
        cin >> temp;
        a1.move(temp, WonderFuck);

        Castle.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        int temp1 = Castle.checkLocation(WonderFuck.getlocationX(), WonderFuck.getlocationY());
        if(temp1 == 1){
            WonderItem.HatterSword(MainChoice);
        }else if(temp1 == 2){
            Characters Card("Red Queen");
            MainChoice.fight(Card);
        }else if(temp1 == 3){
            WonderPuzzle.Puzzle8();
        }
        else if(temp1 == 0){
            cout << "location checked!";}}
        }
        while((WonderFuck.getlocationX() != 11) && (WonderFuck.getlocationY() != 11) );

        cout << "You won! congrats on the waste of time!\n";

}
