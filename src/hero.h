#ifndef __HERO
#define __HERO

#include <string>

class Hero{
    private:
    std::string name;
    int exp, attackPower, level;

    public:
        Hero(const char* name);
        std::string getName(int name);
    void expUp(int expVal);
    void display();

};
#endif