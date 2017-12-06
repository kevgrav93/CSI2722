/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Stephane
 *
 * Created on November 17, 2017, 12:51 PM
 */

#include <functional>
#include <algorithm>
#include <random>
#include <iostream>
#include <sstream>
#include <ctime>
#include <vector>
#include <list>
#include "Player.h"

using namespace std;


int choisirVersion(){
    string input = "";
    int jeuVerison = 0;
    cout<<"Choisir la version du jeu desrirer en entrant le numero de la version \n"<<"1 Qwinti \n"<<"2 Qwixx "<< endl;
    
    while(true){
        cout<< "Votre choix: ";
        getline(cin, input);
        stringstream entrer(input);
        if(entrer >> jeuVerison && (jeuVerison==1 || jeuVerison==2)){
            break;
        }
        cout<<"Votre numero est invalide, veuillez entrer un nouveau numero" << endl;
    }
    return jeuVerison;
}

int nombreDeJoueurs(){
    string input = "";
    int nombreJoueurs = 0;
    cout<<"Choisir un nombre de joueur entre 1 et 3"<< endl;
    
    while(true){
        cout<< "Votre choix: ";
        getline(cin, input);
        stringstream entrer(input);
        if(entrer >> nombreJoueurs && (nombreJoueurs>=1 && nombreJoueurs<=2)){
            break;
        }
        cout<<"Votre numero est invalide, veuillez entrer un nouveau numero" << endl;
    }
    return nombreJoueurs;
    
}

vector<QwintoPlayer> crerJoueursQwinto(int nombreJoueurs){
    
    vector<QwintoPlayer> joueurs;
    vector<string> nomJoueurs;

    cout<<"Entrer le noms des jouers"<<endl;
    string input;
    for(int i =0; i<nombreJoueurs; i++){
        cout<<"Joueur #" << i+1 << ": " << endl;
        getline(cin, input);
        if(find(nomJoueurs.begin(),nomJoueurs.end(), input) != nomJoueurs.end()){
            cout<<"Ce nom existe deja, veuillez entrer un different nom."<<endl;
            i--;
        }
        else{
            nomJoueurs.push_back(input);
            joueurs.push_back(QwintoPlayer(input, QwintoScoreSheet(input)));
        }
    }
    return joueurs;
}


//vector<QwixxPlayer> crerJoueursQwixx(int nombreJoueurs){}

//Main qui demande les inputs de les joueurs et roule le jeu.
int main() {
    
    int versionJeu = choisirVersion();//Demande a l'utilisateur de choisir la version
    int nombreJoueurs = nombreDeJoueurs();//Demnde au joueur de choisir le nombre de joueurs
    
    if(versionJeu == 1){ //On jeu a Qwinto
        //Crer les joueurs
        vector<QwintoPlayer> joueurs = crerJoueursQwinto(nombreJoueurs);
        
        bool jeuTerminer = false;
        while(!jeuTerminer){
            vector<QwintoPlayer>::iterator joueurActif;//LOOP a travers tous les joueurs
            for(joueurActif = joueurs.begin();joueurActif<joueurs.end();joueurActif++ ){
                
                joueurActif->actif = true;
                cout<< "\n" << joueurActif->nom << " rollez les des"<<endl;
            }
        }
        
                
            
    }
            
            
    else{ //On jou a Qwixx
        
    }
    

    
    
    return 0;
}

