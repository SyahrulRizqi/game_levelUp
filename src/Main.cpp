#include <iostream>
#include <string>
#include "hero.h"

using namespace std;

int main(int argc, char const *argv[])
{

    Hero* hero1 = new Hero("Syahrul");
    hero1->display();
    hero1->expUp(20);
    
    return 0;
}
