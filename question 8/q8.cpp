// assignment 0 question 7
// Omar Yossuf
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void BinaryToDecimal(){
    ifstream in;
    ofstream out;
    string infile="binary.txt";
    string outfile="output.txt";
    in.open(infile);
    if(in.fail()){
        cout<<"failed to open file"<<endl;
    } else {
        cout<<"file opened successfully"<<endl;
    }
    int bin,dec=0,expo=0;
    string check;
    in>>bin;
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
int main(){
    BinaryToDecimal();
   return 0;
}
//void BinaryToDecimal(){
//    ifstream in;
//    ofstream out;
//    string infile="binary.txt";
//    string outfile="output.txt";
//    in.open(infile);
//    if(in.fail()){
//        cout<<"failed to open file"<<endl;
//    } else {
//        cout<<"file opened successfully"<<endl;
//    }
//    int size;
//    cout<<"size?";
//    cin>>size;
//    int bin[size],dec[size],expo=0;
//    string check;
//    for(int i=0;i<size;i++){
//    in>>bin[size];}
//for(int i=0;i<size;i++){
//
//    while(bin[size]!=0){
//        if(bin[size]%10==1){
//            dec[size]+=pow(2,expo);
//        } else if (bin[size]%10==0){
//
//        } else{
//            check="false";
//            break;
//
//        }bin[size]/=10;
//        expo++;
//    }
//    if (check=="false"){
//        cout<<"false"<<endl;
//    }else {
//    cout<<"decimal: "<<dec<<endl;
//    }
//}
//}
//int main(){
//    BinaryToDecimal();
//   return 0;
//}
