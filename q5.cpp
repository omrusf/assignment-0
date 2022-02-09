// assignment 0 question 5
// Omar Yossuf

#include <iostream>
using namespace std;

bool CheckNum(int a[], int start, int end, int num) {

    if(end==start)
        return false;
    else{
    if(a[end]==num)
        return true;
    else{
        return CheckNum(a,start,end-1,num);
    }
    }

}
int main(){
    int size;
    cout<<"please enter the size of the array: ";
    cin >> size;
    int s,e;
    int ar[size];
    cout<<"please enter the numbers in the array: "<<endl;
    for(int i = 0; i < size; i++) {
        cin >> ar[i];
    }
    cout<<"please enter the start point (starting from 0): ";
    cin>>s;
    cout<<"please enter the end point (starting from 0): ";
    cin>>e;
    int n;
    cout<<"please enter the number you want to search: ";
    cin >> n;
    
    if(CheckNum(ar, s, e, n)) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }
}

