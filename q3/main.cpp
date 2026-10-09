#include "Product.h"
#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

  

int main(){

    string n;
    double p;

    ofstream outputFile("data.txt");
    if(!outputFile){cout << "ERROR"; return 1;}
    else {

        while(1){
                cout << "whats the product name" << endl;
                cin >> n;
            if(n == "exit") {break;}
            else {
                cout << "whats the price" << endl;
                cin >> p;

                product p1(n,p);
                outputFile << "name: " << p1.getName() << "\nprice: " << p1.getPrice_USD() << "\nPrice in Euros: " << p1.getPriceEUR();
            

            }
            

        }
        outputFile.close();

    }
    return 0;
}