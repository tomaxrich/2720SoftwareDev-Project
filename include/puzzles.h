/**
@file Puzzles.h
@author Anshul Abraham
*/
#ifndef PUZZLES_H
#define PUZZLES_H
#include <string>

using namespace std;

class Puzzles
{

public:
    /**
    @pre none
    @post creates Puzzle objects
    @param none
    */
        Puzzles();
    /**
    @pre none
    @post 1st Puzzle(About Series)
    @param none
    */
        int Puzzle1();
    /**
    @pre none
    @post 2nd Puzzle(Shapes)
    @param none
    */
        int Puzzle2();
    /**
    @pre none
    @post 3rd Puzzle(Pot)
    @param none
    */
        int Puzzle3();
    /**
    @pre none
    @post 4th Puzzle(Probability)
    @param none
    */
        int Puzzle4();
    /**
    @pre none
    @post 5th Puzzle(Number 3)
    @param none
    */
        int Puzzle5();
    /**
    @pre none
    @post 6th Puzzle(Oceans)
    @param none
    */
        int Puzzle6();
    /**
    @pre none
    @post 7th Puzzle(Human Organ)
    @param none
    */
        int Puzzle7();
    /**
    @pre none
    @post 8th Puzzle(Year of Alice)
    @param none
    */
        int Puzzle8();

private:

        int p1;
        int p2;
        string p3;
        int p4;
        int p5;
        int p6;
        string p7;
        int p8;

};




#endif // PUZZLES_H_INCLUDED
