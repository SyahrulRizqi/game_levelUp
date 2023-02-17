#include "hero.h"
#include <iostream>
#include <string>

Hero::Hero(const char* name){
            this-> name = name;
            this->exp = 1;
            this->attackPower = 100;
            this->level = 0;
        }

std::string Hero::getName(int name){
            return this->name;
        }
void Hero::expUp(int expVal){
        std::string lnjt;
        int maxLevel = 30;
        int maxExp = 100;
        for(int i = this->exp; i <= 151; i++){
            this->exp += expVal;
            if (this->exp >= 100){
                std::cout << "--- LEVEL UP ---" << std::endl;
                this->level++;
                std::cout << "Level : " << this->level << std::endl;
                this->exp = 0;
                system("pause");
            }
            else if (this->level == maxLevel){
                std::cout << "----- LEVEL MAX -----" << std::endl;
                break;
            }else{

            std::cout << "Exp yang di dapat : " << this->exp << std::endl;
            }
        }
    }
void Hero::display(){
        std::cout << "Name Hero : " << this->name << std::endl;
        std::cout << "Exp : " << this->exp << std::endl;
        std::cout << "level : " << this->level << std::endl;
        std::cout << "Attack power : " << this->attackPower << std::endl;
    }