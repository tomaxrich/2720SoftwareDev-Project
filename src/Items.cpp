#include "Items.h"
#include "Characters.h"
#include "iostream"
#include "cstdlib"

Items::Items()
{
    efood=10;
    sfood= 5;
    hat=5;
    key=8;
    sword=20;
}
int Items::EnlargingFood(Characters a)
{
    a.gainHealth(efood);
    return (a.getHealth());
}
int Items::ShrinkingFood(Characters s)
{   s.loseHealth(sfood);
    return (s.getHealth());
}
int Items::HatterHat(Characters h)
{
    h.gainStrength(hat);
    return (h.getStrength());
}
int Items::Key(Characters k)
{
    k.gainStrength(key);
    return 0;
}
int Items::HatterSword(Characters s)
{
    s.gainStrength(sword);
    s.gainHealth(sword);
    return (s.getHealth());
}
