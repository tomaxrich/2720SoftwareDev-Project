#include "Helpers.h"
#include <iostream>

using namespace std;

Helpers::Helpers(string charact)
{
    name = charact;
    set_dialogue();
}

int Helpers::speak()
{
    int response;
    cout<<dialogue;
    cin>>response;
    return response;
}

void Helpers::set_dialogue()
{
    if (this->name == "Caterpillar")
    {
        dialogue = "Caterpillar: Welcome to Wonderland! You must help us defeat the Red Queen.\n";
        dialogue += "To get to her, you will need to find a few things and travel to a few places.\n";
        dialogue += "0: look around \n1: travel in room. \n2: fight\n";
    }
    else
    {
        dialogue ="Cheshire Cat:I see you need some help.\n0: look around \n1:travel in room";
        dialogue += "\n2: fight \n Good luck!\n";
    }
}
