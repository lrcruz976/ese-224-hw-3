#include "Task.h"
#include <string>
using namespace std;

//constructors 
        task::task() : priority(0), description(""){}
        task::task(int p, const string d) : priority(p), description(d){}

        //getters
        string task::getDescription() const {return description;}
        int task::getPriority() const {return priority;}