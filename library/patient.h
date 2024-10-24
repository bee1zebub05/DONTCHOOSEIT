#ifndef PATIENT_H
#define PATIENT_H

#include "person.h"
#include <map>

class patient: public person{
    private:
        string Patient_ID;
    public:
        using person::person;
        patient(string Patient_ID = ""):Patient_ID(Patient_ID){}
        ~patient() override = default;
        
        //get
        virtual string getID(){return Patient_ID;}

        //change
        virtual void changeID(const string &ID){ this->Patient_ID = ID;}

        //work with ListOfPatient
        static map<string, patient> ListOfPatient;
        virtual void add() override;
        friend void removePatient();
        friend void ShowAllPatient();
};

map<string, patient> patient::ListOfPatient;

#endif