/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QwintoScoreSheet.cpp
 * Author: Stephane
 * 
 * Created on November 17, 2017, 12:52 PM
 */
enum class Colour {RED, YELLOW, GREEN, BLUE, WHITE};

#include <cstdlib>
#include <random>
#include <iostream>
#include <ctime>
#include <vector>

std::uniform_int_distribution<int> distribution(1,6);

struct RandomDice {
    
    std::mt19937 gen = std::mt19937 (time(0));
        
} randomRoll;



struct Dice {

    //const Colour col;
    int faceValue;
    
    int roll (){
        int temp = distribution(randomRoll.gen);
        faceValue = temp;
        return temp;
    }
    
    
    
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
    
    Dice temp;
    int t = temp.roll();
        
    std::vector<Dice> diceVect;
    int numOfDice = diceVect.size();
    
    void roll (){
        for(Dice de: diceVect){
            de.roll();
        }
    }
    
    Dice * begin(){
        return &diceVect[0];
    }
    Dice * end(){
        return &diceVect[numOfDice]; 
    }
   
    RollOfDice pair (Dice dice1, Dice dice2){
        RollOfDice dicePair;
        dicePair.diceVect.push_back(dice1);
        dicePair.diceVect.push_back(dice2);
        return dicePair;
    }
    
    operator int() const {
        int sum = 0;
        for (Dice de:diceVect){
            sum = sum + de.faceValue;
        }
        return sum;
    };
    
    
    //Missing: insertion operator
    
};







//-------------------------------------------------------------------------------------

