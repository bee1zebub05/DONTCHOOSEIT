#ifndef WORKER_H
#define WORKER_H

#include "person.h"

class worker: public person {
    protected: 
        string WorkID;
        long double salary;
    public:
        using person::person;
        worker(string WorkID = "", long double salary = 0) : WorkID(WorkID),
        salary(salary) {}
        ~worker() override = default;

        //change
        virtual void changeWorkID(const string &WorkID){ this->WorkID = WorkID;}
        virtual void changeSalary(const long double &salary){
            this->salary = salary;
        }

        //get
        virtual string getWorkID(){return WorkID;}
        virtual long double getSalary(){return salary;}

        //else
        virtual void display() override{
            person::display();
            cout<<"WorkID: "<<WorkID<<endl;
            cout<<"Salary: "<<salary<<endl;
        }

        //add
        virtual void add() override;
}; 

#endif