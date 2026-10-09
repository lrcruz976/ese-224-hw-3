#include "Task.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

    int main(){

        string s;
        string d;
        int p;


         ifstream inputFile("tasks.txt");
    if(!inputFile){cerr << "ERROR\n"; return 1;}

    ofstream lowFile("l.txt");
    if(!lowFile){cerr << "ERROR\n"; return 1;}

     ofstream mediumFile("m.txt");
    if(!mediumFile){cerr << "ERROR\n"; return 1;}

     ofstream highFile("h.txt");
    if(!highFile){cerr << "ERROR\n"; return 1;}

        while(inputFile>>s){
            getline(inputFile,d);
            if(s == "Low"){p = 1;}
            else if(s=="Medium") {p = 2;}
            else {p = 3;}
            task t1(p,d);

            switch(p){

                case 1: 
                lowFile << t1.getDescription() << endl;
                break;
                case 2: 
                mediumFile << t1.getDescription() << endl;
                break;
                case 3:
                highFile << t1.getDescription() << endl;

                }
        }
        
    }

