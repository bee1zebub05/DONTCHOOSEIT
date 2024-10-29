#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class appointment{
private:
    string date;
    string time;
    string doctorID;
    string patientID;
public:
    appointment( string date ="", string time = "", string doctorID = "",
                string patientID = "" ): date(date), time(time),
                doctorID(doctorID), patientID(patientID) {}
    virtual ~appointment() = default;

    //change
    virtual void changeDate(const string &date){ this->date = date; }
    virtual void changeTime(const string &time){ this->time = time; }
    virtual void changeDoctorID(const string &doctorID){ 
        this->doctorID = doctorID;
    }
    virtual void changePatientID(const string &patientID){
        this->patientID = patientID;
    }

    //get
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
};


#endif