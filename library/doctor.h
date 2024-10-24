#ifndef DORTOR_H
#define DOCTOR_H

#include "worker.h"
#include <map>

class doctor: public worker{ 
    private:
        string speciality;
    public:
        using worker::worker;
        doctor(string speciality = ""): speciality(speciality) {}
        ~doctor() override = default;

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

        //work with ListOfDoctors
        static map <string, doctor> ListOfDoctors;
        virtual void add() override;
        friend void removeDoctor();
        friend void ShowAllDoctor();
};

map <string, doctor> doctor::ListOfDoctors;

#endif