#include "Product.h"
using namespace std;
#include <string>

 

    //constructors 
    product::product() : name(""), price_usd(0.0) {}
    product::product(const string n, double p) : name(n) , price_usd(p) {}

    //getters
    string product::getName() const {return name;}
    double product::getPrice_USD() const {return price_usd;}

   

     //method
    const double USD_TO_EUR_RATE = .93;
    double product::getPriceEUR() const {return price_usd*USD_TO_EUR_RATE;}

