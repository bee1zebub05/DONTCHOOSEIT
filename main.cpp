#include "source/method.cpp"

int main(){
    doctor d1,d2;
    d1.add(); cout<<endl;
    d2.add(); cout<<endl;

    cout<<"Before rmv: "<<endl;
    ShowAllDoctor();

    removeDoctor();

    cout<<"After rmv: "<<endl;
    ShowAllDoctor();

    return 0;
}