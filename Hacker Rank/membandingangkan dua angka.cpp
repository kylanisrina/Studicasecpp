#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int k,y;
    cin>>k>>y;
    if(k>=1 && y<=100){
        if (k == y){
            cout<<k<<" == "<<y<<endl;
        }
        if (k != y){
            cout<<k<<" != "<<y<<endl;
        }
        if (k < y){
            cout<<k<<" < "<<y<<endl;
        }
        if (k > y){
            cout<<k<<" > "<<y<<endl;
        }
        if (k <= y){
            cout<<k<<" <= "<<y<<endl;
        }
        if (k >= y){
            cout<<k<<" >= "<<y<<endl;
        }
    }
        else {
        cout<<"INPUTAN SALAH";
    }
    return 0;
}

