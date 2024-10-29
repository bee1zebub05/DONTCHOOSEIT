#ifndef PRESCRIPTION_H
#define PRESCRIPTION_H

#include "medicine.h"
#include <string>
#include <vector>

using namespace std;

class prescription{
private:
    string prescriptionID;
    string date; // MM/DD/YYYY example: 10/20/2005
    string time; // HH:MM example 07:30 or 21:45 
    string doctorID;
    long double totalCost;
    vector <medicine> VectorOfMedcines;
public:
    prescription(string prescriptionID = "", string date = "", string time = ""
                ,string doctorID = ""): prescriptionID(prescriptionID),
                date(date), time(time), doctorID(doctorID){}
    virtual ~prescription() = default;
    void addMedicine( medicine &med){
        VectorOfMedcines.push_back(med);
        totalCost += double(med.getQuantity())*(med.getPrice());
    }
    virtual long double getTotalCost(){return totalCost;}
};

#endif