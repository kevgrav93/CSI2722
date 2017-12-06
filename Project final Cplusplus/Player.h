//
//  player.h
//  CSI Project
//
//  Created by Kevin Gravel on 2017-12-06.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#ifndef player_h
#define player_h
#include "scoresheet.h"

class Player{
    
public:
    std::string nom;
    bool actif;
    Player(std::string _nom){
        nom = _nom;
    };
    virtual void entrerAvantLancer(RollOfDice &rollOfDice) = 0;
    virtual void entrerApresLancer(RollOfDice &rollOfDice) = 0;
    
};


#include "QwintoPlayer.h"
//#include "QwixxPlayer.h"

#endif /* player_h */
