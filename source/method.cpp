#include "../library/material.h"

//patient.cpp

void patient::add(){
    person::add();
    string Patient_ID; 
    cout << "Patient ID: "; getline(cin,Patient_ID);
    this->Patient_ID = Patient_ID;

    ListOfPatient[Patient_ID] = *this;
}

void removePatient(){
    string ID;
    cout<<"Enter the ID of the patient need to remove: ";
    getline(cin,ID);
    if( patient::ListOfPatient.find(ID) == patient::ListOfPatient.end() ){
        cout<<"This ID is not valid"<<endl;
    }
    else patient::ListOfPatient.erase(ID);
}

void ShowAllPatient(){
    for(auto i: patient::ListOfPatient){
        i.second.display();
        cout<<endl;
    }
}

//nurse.cpp
void nurse::add(){
    worker::add();
    string speciality;
    cout << "Speciality: "; getline(cin,speciality);
    this->speciality = speciality;

    ListOfNurses[WorkID] = *this;
}

void removeNurse(){
    string ID;
    cout<<"Enter the ID of the nurse need to remove: ";
    getline(cin,ID);
    if( nurse::ListOfNurses.find(ID) == nurse::ListOfNurses.end() ){
        cout<<"This ID is not valid"<<endl;
    }
    else nurse::ListOfNurses.erase(ID);
}

void ShowAllNurse(){
    for(auto i: nurse::ListOfNurses){
        i.second.display();
        cout<<endl;
    }
}

//doctor.cpp
void doctor::add(){
    worker::add();
    string speciality;
    cout << "Speciality: "; getline(cin,speciality);
    this->speciality = speciality;

    ListOfDoctors[WorkID] = *this;
}

void removeDoctor(){
    string ID;
    cout<<"Enter the ID of the doctor need to remove: ";
    getline(cin,ID);
    if( doctor::ListOfDoctors.find(ID) == doctor::ListOfDoctors.end() ){
        cout<<"This ID is not valid"<<endl;
    }
    else doctor::ListOfDoctors.erase(ID);
}

void ShowAllDoctor(){
    for(auto i: doctor::ListOfDoctors){
        i.second.display();
        cout<<endl;
    }
}

//worker.cpp
void worker::add(){
    person::add();
    string WorkID;
    cout<<"WorkID: "; getline(cin,WorkID);
    this->WorkID = WorkID;
}

//person.cpp
void person::add() {
    cout << "Fill the following information: " << endl;

    string name;
    cout << "Name: "; 
    getline(cin, name);
    this->name = name;

    int age;
    cout << "Age: "; 
    cin >> age;
    this->age = age;
    cin.ignore(); 

    string sex;
    cout << "Gender: "; 
    getline(cin, sex);
    this->sex = sex;

    string phoneNumber;
    cout << "Phone Number: "; 
    getline(cin, phoneNumber);
    this->PhoneNumber = phoneNumber;

    string address;
    cout << "Address: "; 
    getline(cin, address);
    this->address = address;
}
