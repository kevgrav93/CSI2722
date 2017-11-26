//
//  Compte.h
//  Devoir04
//
//  Created by Kevin Gravel and Stephane Tremblay on 2017-11-12.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#ifndef Compte_h
#define Compte_h

class Compte{
    
private:
    double solde;
    
public:
    Compte();
    Compte(double x);
    virtual void credit(double x);
    virtual bool debit(double x);
    double getBalance();
};

#endif /* Compte_h */
