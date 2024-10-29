#ifndef MEDICINE_H
#define MEDICINE_H

#include <string>
#include <iostream>
#include <map>
using namespace std;

class medicine{
private:
    string medicineID;
    string medicineName;
    bool unit; // 0 = liquid , 1 = solid
    bool status; // 0 = unavailable, 1 = avaiilabe
    int quantity;
    long double price;
    string description;
public:
    medicine(string medicineID = "", string medicineName = ""
            ,bool unit = 0, bool status = 0, int 
            quantity = 0,
            long double price = 0, string description = ""):
            medicineID(medicineID), medicineName(medicineName), unit(unit), 
            status(status), 
            quantity(quantity),price(price),
            description(description) {}

    virtual ~medicine() = default;

    //check
    bool checkQuantity(){return quantity > 0;}

    //change
    virtual void changeMedicineID(const string &medicineID){
        this->medicineID = medicineID;
    }
    virtual void changeMedicineName(const string & medicineName){
        this-> medicineName = medicineName;
    }
    virtual void changeQuantity(const int &quantity){
        this->quantity = quantity;
    }
    virtual void addQuantity(const int &quantity){
        this->quantity += quantity;
    }
    virtual void minusQuantity(const int &quantity){
        if( !checkQuantity ){
            cout<<"Cannot get this much available: "<<this->quantity
            <<" left"<<endl;
            return;
        }
        this->quantity-=quantity;
    }
    virtual void changePrice(const long double &price){this->price = price;}
    virtual void changeDescription(const string &description){
        this->description = description;
    }

    //get
    virtual string getMedicineID(){return medicineID;}
    virtual string getMedicineName(){return medicineName;}
    virtual bool getUnit(){return unit;}
    virtual bool getStatus(){return status;}
    virtual int getQuantity(){return quantity;}
    virtual long double getPrice(){ return price;}
    virtual string getDescription(){return description;}
    
    virtual void display(){
        cout<<"Medicine ID: "<<medicineID<<endl;
        cout<<"Unit: "<< (unit ? "solid":"liquid")<<endl;
        cout<<"Status: "<< (status ? "available":"unavailable")<<endl;
        cout<<"Quantity: "<<(quantity<<unit ? " pill":" ml")<<endl;
        cout<<"Price: "<< price <<endl; 
        cout<<"Description: "<<description<<endl;
    }  

    static map<string, medicine> ListOfMedicine;
};

map<string, medicine> medicine::ListOfMedicine;

#endif