//
//  CompteCheque.h
//  Devoir04
//
//  Created by Kevin Gravel and Stephane Tremblay on 2017-11-12.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#ifndef CompteCheque_h
#define CompteCheque_h

#include "Compte.h"

class CompteCheque : public Compte{
    
private:
    double frais;
    
public:
    CompteCheque(double x, double y);
    void credit(double x);
    bool debit(double y);

};


#endif /* CompteCheque_h */
