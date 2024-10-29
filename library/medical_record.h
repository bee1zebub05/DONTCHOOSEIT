#ifndef MEDICAL_RECORD_H
#define MEDICAL_RECORD_H

#include "doctor.h"
#include "patient.h"
#include "prescription.h"

class medicalRecord{

private:
    doctor doc;
    patient pat;
    vector< prescription > ListOfPrescription;

public:

    void addPrescription( prescription &Pres ){
        ListOfPrescription.push_back(Pres);
    }

    long double getTotalCost(){
        long double sum = 0;
        for(auto i: ListOfPrescription) sum+=i.getTotalCost();
        return sum;
    }

};

#endif