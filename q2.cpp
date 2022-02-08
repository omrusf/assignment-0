// assignment 0 question 2
// Omar Yossuf
#include <iostream>
using namespace std;
int main(){
    int num,rev=0;
    
    cout<<"please enter a number: ";
    cin>>num;
    
    while(num!=0){
        rev*=10;
        rev+=num%10;
        num/=10;
    }
    cout<<"result: "<<rev<<endl;
    return 0;
}
