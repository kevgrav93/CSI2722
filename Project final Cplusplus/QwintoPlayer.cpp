//
//  QwintoPlayer.cpp
//  CSI Project
//
//  Created by Kevin Gravel on 2017-12-06.
//  Copyright © 2017 Kevin Gravel. All rights reserved.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "QwintoPlayer.h"
using namespace std;

void QwintoPlayer::entrerAvantLancer(RollOfDice &rollOfDice){
    string tmp = "";
    vector<string> selectionMain;
    while(tmp!="OK"){
        selectionMain.clear();
        cout<<"Veuillez choisir le de dont vous voulez roulez. Entrez \"fin\" lorsque vous avez terminer (ex: red, blue, yellow):"<<endl;
        vector<string> selection;
        vector<string>::iterator iter;
        string input = "";
        
        while(input != "fin" || (input != "pass" && actif == false)){
            cin>>input;
            selection.push_back(input);
        }
        
        for(iter = selection.begin(); iter<selection.end();iter++){
            if(*iter == "blue" || *iter =="b"){
                selectionMain.push_back("BLUE");}
            else if(*iter == "red" || *iter =="r"){
                selectionMain.push_back("RED");}
            else if(*iter == "yellow" || *iter =="y"){
                selectionMain.push_back("YELLOW");}
        }
        
        cout<<"\nLancer: "<<endl;
        for(vector<string>::iterator iter2 = selectionMain.begin(); iter2!= selectionMain.end(); iter2++){
            cout<<"["<<static_cast<char>(toupper(((*iter2)[0])))<<"  ?]\n";
        }
        cout<<"Entrer \"OK\" pour confirmer le lancer:"<<endl;
        
        cin>>tmp;
    }
    
    if(find(selectionMain.begin()), selectionMain.end(), "BLUE")!= selectionMain.end()){
        Dice dice1 = Dice(Color::blue);
        rollOfDice.dices.push_back(dice1);
    }
    if(find(selectionMain.begin()), selectionMain.end(), "RED")!= selectionMain.end()){
        Dice dice2 = Dice(Color::red);
        rollOfDice.dices.push_back(dice2);
    }
    if(find(selectionMain.begin()), selectionMain.end(), "YELLOW")!= selectionMain.end()){
        Dice dice3 = Dice(Color::yellow);
        rollOfDice.dices.push_back(dice3);
    }
}

