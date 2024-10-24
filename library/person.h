#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class person{
    protected:
        string name;
        int age;
        string sex;
        string PhoneNumber;
        string address;

    public:
        person( string name = "", int age = 0, string sex = "", 
                string PhoneNumber = "", string address = "") : name(name), 
                age(age), sex(sex), PhoneNumber(PhoneNumber), address(address){}
        
        virtual ~person() =  default;

        //change 
        virtual void changeName(const string &name){ this->name = name; }
        virtual void changeAge(const int &age){ this->age = age; }
        virtual void changeSex(const string &sex){ this->sex = sex; }
        virtual void changePhoneNumber(const string &PhoneNumber){
            this->PhoneNumber = PhoneNumber;
        }
        virtual void changeAddress(const string &address){ 
            this->address = address;
        }

        //get
        virtual string getName(){ return name; }
        virtual int getAge(){ return age; }
        virtual string getSex(){ return sex; }
        virtual string getPhoneNumer(){ return PhoneNumber; }
        virtual string getAddress() { return address; }

        //else
        virtual void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Sex: "<<sex<<endl;
            cout<<"PhoneNumber: "<<PhoneNumber<<endl;
            cout<<"Address: "<<address<<endl;
        }

        //add
        virtual void add();

};

#endif