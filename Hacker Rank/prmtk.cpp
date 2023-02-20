#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    char P,C,M,U,N; 
    float K,Y,L,A,X,S;
    for (int i=1;i<=3;i++){
    cin>>C;
    cin>>K;
    cin>>P;
    cin>>Y;
    cin>>M;
    cin>>N;
    cin>>C;
    cin>>A;
    cin>>U;
    cin>>X;
    cin>>M;

    switch(P){

    case '+':
        L=K+Y;
        break;
    case '-':
        L=K+Y;
        break;
    case '*':
        L=K+Y;
        break;
    }
    switch(U){ 
    case '+':
        S=A+X;
        break;
    case '-':
        S=A-X;
        break;
    case '*':
        S=A*X;
        break;
    }
    cout<<L*S<<" ";

    }

    return 0;
}

