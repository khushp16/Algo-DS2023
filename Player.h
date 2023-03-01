#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player {

    public:
        virtual char makeMove() = 0;
        virtual std::string getName() = 0;    
        std::string name;
        char move;
};

#endif