//
//  CompteCheque.cpp
//  Devoir04
//
//  Created by Kevin Gravel and Stephane Tremblay on 2017-11-12.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#include "CompteCheque.h"

CompteCheque::CompteCheque(double x, double y) : Compte(x){
    frais = y;
}

void CompteCheque::credit(double x){
    Compte::credit(x);
    Compte::debit(frais);
    
}

bool CompteCheque::debit(double x){
    bool success = Compte::debit(x);
    if(success){
       Compte::debit(frais);
    }
    return 0;
}

