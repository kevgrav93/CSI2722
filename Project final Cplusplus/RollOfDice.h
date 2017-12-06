//
//  RollOfDice.h
//  CSI Project
//
//  Created by Kevin Gravel on 2017-12-06.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#ifndef RollOfDice_h
#define RollOfDice_h
enum Colour {RED, YELLOW, GREEN, BLUE, WHITE};

using namespace std;

struct RandomDice {
    
    std::mt19937 gen = std::mt19937 (time(0));
    
};



struct Dice {
    
    Colour diceColor;
    int faceValue;
    
    int roll ();
};
/*
 std::ostream& operator<<(std::ostream& os, Dice& de){
 return os << de;
 }
 std::istream& operator>>(std::istream& os, Dice& de){
 return os >> de;
 }
 */
struct RollOfDice {
    
    vector<Dice> diceVect;
    
    int roll ();
    
    static RollOfDice pair(Dice dice1, Dice d2);
    
    operator int();
    
    friend ostream& operator<<(ostream& os, const RollOfDice & rd);
    //Missing: insertion operator
    
};

#include "RollOfDice.cpp"

#endif /* RollOfDice_h */
