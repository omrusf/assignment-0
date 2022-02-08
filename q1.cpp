// assignment 0 question 1
// Omar Yossuf
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main(){
    srand((unsigned)time (0));
    int n,m;
    cout<<"please enter the size of the rows: ";
    cin>>n;
    cout<<"please enter the size of the cols: ";
    cin>>m;
    int a[n][m];
    int b[n];
    for (int i=0;i<n;i++){
        b[i]=0;
        for (int j=0;j<m;j++){
            if (i%2!=0){
                a[i][j]=rand()%6+1;
                b[i]+=a[i][j];
            } else {
                a[i][j]=rand()%6+7;
                b[i]+=a[i][j];
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<setw(4)<<a[i][j]<<"  ";
        }
        cout<<setw(4)<<"|"<<setw(4)<<b[i]<<endl;
    }
    return 0;
}
