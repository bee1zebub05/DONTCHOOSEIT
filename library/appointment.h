#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
#include <string>
#include <map>
using namespace std;

class appointment{
private:
    string appointmentID;
    string date; // MM/DD/YYYY example: 10/20/2005
    string time; // HH:MM example 07:30 or 21:45 
    string doctorID;
    string patientID;
public:
    appointment(string appointmentID = "", string date ="", string time = "", 
                string doctorID = "", string patientID = "" ): date(date), 
                time(time), doctorID(doctorID), patientID(patientID) {}
    virtual ~appointment() = default;

    //change
    virtual void changeAppoinmentID(const string &appointmentID){
        this->appointmentID = appointmentID;
    }
    virtual void changeDate(const string &date){ this->date = date; }
    virtual void changeTime(const string &time){ this->time = time; }
    virtual void changeDoctorID(const string &doctorID){ 
        this->doctorID = doctorID;
    }
    virtual void changePatientID(const string &patientID){
        this->patientID = patientID;
    }

    //get
    virtual string getAppoinmentID(){return appointmentID;}
    virtual string getDate(){return date;}
    virtual string getTime(){return time;}
    virtual string getDoctorID(){ return doctorID;}
    virtual string getPatientID(){ return patientID;}

    virtual void display(){
        cout<<"Date: "<<date<<endl;
        cout<<"Time: "<<time<<endl;
        cout<<"DoctorID: "<<doctorID<<endl;
        cout<<"PatientID: "<<patientID<<endl;
    }

    //map
    static map<string,appointment> ListOfAppoinments;
    virtual void add();
    friend void removeAppointment();
    friend void ShowAllAppointment();
};

map<string,appointment> appointment::ListOfAppoinments;

#endif