#include "puzzles.h"
#include "iostream"

Puzzles::Puzzles()
{
    p1=0;
    p2=0;
}

int Puzzles::Puzzle1()
{
    cout<<"What is the missing numbers in sequence \n";
    cout<<"1 - 8 - 27 - ? - 125 - 216 \n";
    cin>>p1;
    if (p1==36)
        {return 0;}
    else
    {
        cout<<"wrong answer \n";
        return -1;
    }

}

int Puzzles::Puzzle2()
{
    cout<<"How many Sides does a Hexagonal have \n";
    cin>>p2;
    if (p2==6)
    {
        cout<<"Right Answer"<<endl;;
        return 0;
    }
    else
    {
        cout<<"Wrong Answer"<<endl;;
        return -1;
    }
}

int Puzzles::Puzzle3()
{
    cout<<"What start with 't',is filled with 't' and ends with 't'"<<endl;;
    cin>>p3;
    if( (p3 == "teapot") || (p3 ==  "Teapot") || (p3 == "TEAPOT"))
    {
        return 0;
    }
    else
    {
        return -1;

    }
}
int Puzzles::Puzzle4()
{
    cout<<"Mr. Smith has two children. If the older child is a boy, what are the odds that the other child is also a boy? \n";
    cin>>p4;
    if(p4==50)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int Puzzles::Puzzle5()
{
    cout<<"I am a number with a couple of friends, quarter a dozen, and you'll find me again. What am I?"<<endl;
    cout<<"(Use numeric Value)";
    cin>>p5;
    if(p5==3)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int Puzzles::Puzzle6()
{
    cout<<"By how many Oceans is Canada Surrounded from "<<endl;
    cin>>p6;
    if (p6==3)
    {
        return 0;
    }
    else
    {
        return -1;
    }

}
int Puzzles::Puzzle7()
{
    cout<<"What is the largest Organ in a human body"<<endl;
    cin>>p7;
    if((p7=="skin" || p7=="SKIN" || p7=="Skin"))
       {
           return 0;
       }
    else
        {
            return -1;
        }
}
int Puzzles::Puzzle8()
{
    cout<<"In what Year Alice's Adventures in Wonderland was written"<<endl;
    cin>>p8;
    if(p8==1865)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

