// assignment 0 question 6
// Omar Yossuf
#include <iostream>
#include <string>
using namespace std;

bool check(){
    string wrd,rev;
    int size;
    cout<<"please type your word here: ";
    cin>>wrd;
    size=wrd.length();
    for(int i=size-1;i>=0;i--){
        rev+=wrd[i];
    }
    if(rev==wrd){
        return true;
    } else{
        return false;
    }
}


int main(){
    if (check()){
        cout<<"palindrome"<<endl;
    } else {
        cout<<"not palindrome"<<endl;
    }
        
    return 0;
}
