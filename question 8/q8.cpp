// assignment 0 question 8
// Omar Yossuf
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

void BinaryToDecimal(){
    ifstream in;
    ofstream out;
    string infile="binary.txt";
    string outfile="output.txt";
    in.open(infile);
    out.open(outfile);
    if(in.fail()){
        cout<<"failed to open file"<<endl;
    } else {
        cout<<"file opened successfully"<<endl;
    }
    int bin,dec=0,expo=0;
    string check;
    while(in>>bin){
        check="";
        dec=0;
        expo=0;
    while(bin!=0){
        if(bin%10==1){
            dec+=pow(2,expo);
        } else if (bin%10==0){

        } else{
            check="false";
            break;

        }bin/=10;
        expo++;
    }
    if (check=="false"){
        out<<"false"<<endl;
    }else {
    out<<"decimal: "<<dec<<endl;
    }
    }
}
int main(){
    BinaryToDecimal();
   return 0;
}
