/**
@file Characters.h
@author Nicole Vachon
*/
#ifndef HELPERS_H_INCLUDED
#define HELPERS_H_INCLUDED
#include <string>

using namespace std;

class Helpers
{
public:
    /**
    @pre none
    @post creates helper character
    @param string for name
    */
    Helpers(string);
    /**
    @pre helper is initiated
    @post outputs dialogue of helper
    @return int for next command
    */
    int speak();
private:
    string name;
    string dialogue = "";
    void set_dialogue();
};

#endif // HELPERS_H_INCLUDED
