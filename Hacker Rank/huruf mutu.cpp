#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int nilai;
    cin>>nilai;
    
    if(nilai>=76 && nilai<=100){
        cout<<"A"<<endl;
    }else if(nilai>=71 && nilai<76){
        cout<<"B+"<<endl;
    }else if(nilai>=66 && nilai<71){
        cout<<"B"<<endl;
    }else if(nilai>=61 && nilai<66){
        cout<<"C+"<<endl;
    }else if(nilai>=56 && nilai<61){
        cout<<"C"<<endl;
    }else if(nilai>=50 && nilai<56){
        cout<<"D"<<endl;
    }else if(nilai<50 && nilai>0){
        cout<<"E"<<endl;
    }else{
        cout<<"Nilai Melebihi Range";
    }
    return 0;
}

