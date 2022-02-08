// assignment 0 question 4
// Omar Yossuf
#include <iostream>
using namespace std;

int main(){
    int day,hr,min,sec;
    cout<<"please enter the number of seconds: ";
    cin>>sec;
    while(sec>59){
        day=sec/86400;
        sec-=(day*86400);
        hr=sec/3600;
        sec-=(hr*3600);
        min=sec/60;
        sec-=(min*60);
    }
    cout<<"days: "<<day<<"\nhours: "<<hr<<"\nminutes: "<<min<<"\nseconde: "<<sec<<endl;
        
    return 0;
}
