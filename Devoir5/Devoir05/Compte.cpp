//
//  Compte.cpp
//  Devoir04
//
//  Created by Kevin Gravel and Stephane Tremblay on 2017-11-12.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#include "Compte.h"
#include<iostream>

Compte::Compte(double x){
    if(x<0){
        solde =0;
        std::cout<<"Le solde initial n'était pas valide"<<std::endl;
    }
    else{
        solde = x;
    }
}

void Compte::credit(double x){
    solde = solde + x;
}

bool Compte::debit(double x){
    bool debitSuccess;
    if(x>solde){
        std::cout <<"Debit amount exceeded account balance"<<std::endl;
        debitSuccess = false;
    }
    else{
        solde = solde-x;
        debitSuccess = true;
    }
    return debitSuccess;
}

double Compte::getBalance(){
    return solde;
}
