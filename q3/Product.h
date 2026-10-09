#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class product {
    private: 

    string name;
    double price_usd;

    public:

    //constructors 
    product();
    product( const string n, double p);

    //getters
    string getName() const;
    double getPrice_USD() const;

    //method
    double getPriceEUR() const;
};




#endif