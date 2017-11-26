//
//  CompteEpargne.cpp
//  Devoir04
//
//  Created by Kevin Gravel and Stephane Tremblay on 2017-11-12.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#include "CompteEpargne.h"

CompteEpargne::CompteEpargne(double x, double y) : Compte(x){
    interet = y;
}

double CompteEpargne::calculateInterest(){
    double interetGagner = interet * Compte::getBalance();
    return interetGagner;
}
