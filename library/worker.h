#ifndef WORKER_H
#define WORKER_H

#include "person.h"

class worker: public person {
    protected: 
        string WorkID;
    public:
        using person::person;
        worker(string WorkID = "") : WorkID(WorkID) {}
        ~worker() override = default;

        //change
        virtual void changeWorkID(const string &WorkID){ this->WorkID = WorkID;}

        //get
        virtual string getWorkID(){return WorkID;}

        //else
        virtual void display() override{
            person::display();
            cout<<"WorkID: "<<WorkID<<endl;
        }

        //add
        virtual void add() override;
}; 

#endif