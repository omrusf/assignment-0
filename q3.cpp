// assignment 0 question 3
// Omar Yossuf
#include <iostream>
using namespace std;
int main(){
    int num,digit,count=0;
    
    cout<<"please enter a number: ";
    cin>>num;
    cout<<"please enter a digit: ";
    cin>>digit;
    
    while(num!=0){
        if(num%10==digit){
            count++;
        }num/=10;
    }
    cout<<"result: "<<count<<endl;
    return 0;
}
