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

#include <cstdlib>
#include <random>
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
using namespace std;




/*
 * 
 */
int main(int argc, char** argv) {
    
    struct hello {
    
                
        std::vector<string> t;
        string * begin(){
            return &t[0];
        }
        string * end(){
            return &t[t.size()];
        }
    } h;
    
    h.t.push_back("hi");
    h.t.push_back("this");
    h.t.push_back("is");
    h.t.push_back("a test");
    
    for(string i : h){
        std::cout << i << endl;
    }
    
    
    return 0;
}

