#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    //declare counters
    int homepageCount = 0;
    int aboutCount = 0;

    ifstream inputFile("website_log.txt");
    if(!inputFile) {
        cerr<< "Error : could not open website_log.txt\n";
        return 1;
    }

    //open output file for writing

    ofstream outputFile("visitor_report.txt");
    if (!outputFile) {
        cerr << "Error: coult not open visitor_report.txt\n";
        return 1;
    }

    //read file line by line

    string pageName;
    while (getline(inputFile, pageName)) {
        if (pageName == "homepage") {
            homepageCount++;
        }
        else if (pageName == "about_page") {
            aboutCount++;
        }
        else {/*do nothing*/;}
    }
    outputFile << "Homepage visits: " << homepageCount << endl;
    outputFile << "about page visits: " << aboutCount << endl;

    inputFile.close();
    outputFile.close();

    cout << "Visitor report created successfullt. \n";
    return 0;

}