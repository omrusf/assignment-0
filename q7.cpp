// assignment 0 question 7
// Omar Yossuf
#include <iostream>
#include <climits>
using namespace std;

int Min_Max(){
    int min=INT_MAX, max=INT_MIN;
    int size;
    cout<<"please enter the size of your array: ";
    cin>>size;
    int a[size];
    cout<<"please enter your numbers here: "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
        if(min>a[i]){
            min=a[i];
        }
        if (max<a[i]){
            max=a[i];
        }
    }
    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;
    return min;
    return max;
}
int main(){
    Min_Max();
    return 0;
}
