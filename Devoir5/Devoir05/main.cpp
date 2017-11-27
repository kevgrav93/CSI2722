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
#include <vector>
#include <typeinfo>

using namespace std;


int main(int argc, const char * argv[]) {
    
     //---------------------------------------------------------------
    std::cout << "------------Devoir 5--------------" << endl;
    std::vector<Compte*> vectorCompte;
    
    Compte compte1 = Compte(1000);
    CompteEpargne compte2 = CompteEpargne(1000,0.05);
    CompteCheque compte3 = CompteCheque(1000, 1);
    
    vectorCompte.push_back(&compte1); //normal
    vectorCompte.push_back(&compte2); //epargne
    vectorCompte.push_back(&compte3); //cheque
    
    //Pour un test plus exhaustif
    /*
    CompteCheque compte6 = CompteCheque(3000, 1);
    Compte compte4 = Compte(-1000);
    CompteEpargne compte5 = CompteEpargne(1000,0.1);
    
    Compte compte7 = Compte(5000);
    CompteCheque compte9 = CompteCheque(1000, 1);
    CompteEpargne compte8 = CompteEpargne(1000,1.00);
    
    
    CompteEpargne compte11 = CompteEpargne(10000,0.5);
    Compte compte10 = Compte(2);
    CompteCheque compte12 = CompteCheque(100, 1);
    
    
    
    
    vectorCompte.push_back(&compte4); //normal
    vectorCompte.push_back(&compte5); //epargne
    vectorCompte.push_back(&compte6); //cheque
    
    vectorCompte.push_back(&compte7); //normal
    vectorCompte.push_back(&compte8); //epargne
    vectorCompte.push_back(&compte9); //cheque
    
    vectorCompte.push_back(&compte10); //normal
    vectorCompte.push_back(&compte11); //epargne
    vectorCompte.push_back(&compte12); //cheque
    */
    
    
    //variable temporaire pour les montants entres dans la boucle
    int temp;
    
    //Boucle pour traiter chaque compte
    
	for (int i = 0; i < vectorCompte.size(); i++) {
		std::cout << "--------------------------------" << endl;
		//"Cast" pour voir quel type the compte est a la position i
		CompteEpargne* testEpargne = dynamic_cast<CompteEpargne*> (vectorCompte[i]);
		CompteCheque* testCheque = dynamic_cast<CompteCheque*> (vectorCompte[i]);

		if (testEpargne != NULL) {


			std::cout << "Le solde courant du compte epargne est: " << testEpargne->getBalance() << endl;
			std::cout << "Entrez un montant a debiter du compte: ";
			std::cin >> temp;
			testEpargne->debit(temp);
			std::cout << "Entrez un montant a crediter au compte: ";
			std::cin >> temp;
			testEpargne->credit(temp);
			testEpargne->credit(testEpargne->calculateInterest());
			std::cout << "Le solde final du compte epargne est: " << testEpargne->getBalance() << endl;

		}
		else if (testCheque != NULL) {

			std::cout << "Le solde courant du compte cheque est: " << testCheque->getBalance() << endl;
			std::cout << "Entrez un montant a debiter du compte: ";
			std::cin >> temp;
			//Si rien est ajouter ou sorti du compte, le frais n'est pas deduit.

			if (temp != 0) {
				testCheque->debit(temp);
			}

			std::cout << "Entrez un montant a crediter au compte: ";
			std::cin >> temp;

			if (temp != 0) {
				testCheque->credit(temp);
			}

			std::cout << "Le solde final du compte cheque est: " << testCheque->getBalance() << endl;

		}
		else {

			std::cout << "Le solde courant du compte normal est: " << vectorCompte[i]->getBalance() << endl;
			std::cout << "Entrez un montant a debiter du compte: ";
			std::cin >> temp;
			vectorCompte[i]->debit(temp);
			std::cout << "Entrez un montant a crediter au compte: ";
			std::cin >> temp;
			vectorCompte[i]->credit(temp);
			std::cout << "Le solde final du compte normal est: " << vectorCompte[i]->getBalance() << endl;

		}

	}
    
    std::cout << "------------ Soldes finals ----------------"<<endl;
    
    for(int i = 0; i<vectorCompte.size(); i++ ){
    
        std::cout << "Compte " << i << " solde: ---> " << vectorCompte[i] -> getBalance() << endl;
    
    }


	system("pause");
}
