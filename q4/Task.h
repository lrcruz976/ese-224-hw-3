#ifndef TASK_H
#define TASK_H
#include <string>
using namespace std;

    class task{
        private:
        string description;
        int priority;

        public:
        //constructors 
        task();
        task(int p, const string d);

        //getters
        string getDescription() const;
        int getPriority() const;


    };





#endif