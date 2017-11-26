//
//  CompteEpargne.h
//  Devoir04
//
//  Created by Kevin Gravel and Stephane Tremblay on 2017-11-12.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#ifndef CompteEpargne_h
#define CompteEpargne_h

#include "Compte.h"

class CompteEpargne : public Compte{
    
private:
    double interet;
    
public:
    CompteEpargne(double x, double y);
    double calculateInterest();
    
};




#endif /* CompteEpargne_h */
