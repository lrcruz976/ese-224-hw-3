#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    double foodTotal = 0.0;
    double transportTotal = 0.0;
    double entertainmentTotal = 0.0;
    

    ifstream inputFile("expenses.txt");
    if(!inputFile){cerr << "ERROR\n"; return 1;}

    ofstream outputFile("out.txt");
    if(!outputFile){cerr << "ERROR\n"; return 1;}

    
    string category;
    double temp;

    while (inputFile >> category){
        if (category == "Food"){inputFile >> temp; foodTotal+= temp;}
        else if (category == "Transport"){inputFile >> temp; transportTotal += temp;}
        else if (category == "Entertainment"){inputFile >> temp; entertainmentTotal += temp;}
        else{}
    }
    outputFile << "food total: " << foodTotal << endl;
    outputFile << "transport total: " << transportTotal <<endl;
    outputFile << "entertainment total: " << entertainmentTotal << endl;

    inputFile.close();
    outputFile.close();

    return 0;


}