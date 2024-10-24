#ifndef NURSE_H
#define NURSE_H

#include "worker.h"
#include <map>

class nurse: public worker{ 
    private:
        string speciality;
    public:
        using worker::worker;
        nurse(string speciality = ""): speciality(speciality) {}
        ~nurse() override = default;

        //change
        virtual void changeSpeciality(const string &speciality){
            this->speciality =speciality;
        }

        //get
        virtual string getSpeciality(){ return speciality; }

        //else
        virtual void display() override{
            worker::display();
            cout<<"Speciality: "<<speciality<<endl;
        }

        //work with ListOfNurses
        static map <string, nurse> ListOfNurses;
        virtual void add() override;
        friend void removeNurse();
        friend void ShowAllNurse();
};

map <string, nurse> nurse::ListOfNurses;

#endif