//
//  main.cpp
//  Devoir04
//
//  Created by Kevin Gravel and Stephane Tremblay on 2017-11-12.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//

#include <iostream>
#include "CompteEpargne.h"
#include "Compte.h"
#include "CompteCheque.h"
using namespace std;


int main(int argc, const char * argv[]) {
    
    Compte compte1 = Compte(1000);
    CompteEpargne compte2 = CompteEpargne(2000,0.05);
    CompteCheque compte3 = CompteCheque(3000, 1);
    
    //Test de balance des comptes
    cout<<compte1.getBalance()<<endl;
    cout<<compte2.getBalance()<<endl;
    cout<<compte3.getBalance()<<endl;
    
    //test de credit d'un compte
    compte1.credit(1000);
    cout<<compte1.getBalance()<<endl;
    
    //test de debit plus gros que la balance du compte
    compte1.debit(2001);
    cout<<compte1.getBalance()<<endl;
    
    //test de credit d'un compte cheque
    compte3.credit(1000);
    cout<<compte3.getBalance()<<endl;
    
    //test de debit d'un compte cheque
    compte3.debit(1000);
    cout<<compte3.getBalance()<<endl;
    
    //test d'interet d'un compte cheque
    double interest = compte2.calculateInterest();
    cout<<interest<<endl;
    
    //Test de solde intitial negatif
    Compte compte4 = Compte(-5000);
    cout<<compte4.getBalance()<<endl;
    Compte compte5 = CompteEpargne(-5000,3);
    cout<<compte5.getBalance()<<endl;
    Compte compte6 = CompteCheque(-5000,3);
    cout<<compte6.getBalance()<<endl;

}
