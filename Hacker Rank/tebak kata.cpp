#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
     int K,Y;
    int nyawa = 0; 
    string L,A; 
    cin>>Y;
    if(Y>0&&Y<=10) {
    cin>>A;
    for (K=1; K<=Y; K++){
        cin>>L;
    if (L==A) {
        nyawa++; 
        if (K==Y){ 
        cout<<"MENANG "<<nyawa;
    }
    }else if(L!=A) { 
        if(K==Y){ 
        cout<<"KALAH "<<nyawa;
    }
    }
    }
}else{

    cout<<"INPUTAN SALAH";

}
    return 0;
}

