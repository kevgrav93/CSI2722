//
//  QwintoPlayer.h
//  CSI Project
//
//  Created by Kevin Gravel on 2017-12-06.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#ifndef QwintoPlayer_h
#define QwintoPlayer_h
#include "Player.h"

class QwintoPlayer : public Player{
    
public:
    QwintoScoreSheet scoresheet;
    QwintoPlayer(std::string nom, QwintoScoreSheet scoresheet) : Player(nom), scoresheet(scoresheet){};
    void entrerAvantLancer(RollOfDice &rollOfDice);
    void entrerApresLancer(RollOfDice &rollOfDice);
    
};

#include "QwintoPlayer.cpp"
#endif /* QwintoPlayer_h */
