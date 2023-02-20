#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int K, Y;
    cin >> K >> Y;
    
    if((K >= 0) && (K <= 1000) && (Y >= 0 ) && (Y <= 1000) && (K < Y) && (K <= Y)){
        for(int o = K; o <= Y; o++){
            
            if(o==0){
                cout << 0 << " ";
            }
            else if(o!=0 && o%15==0){
                cout << "Lima Belas ";
            }
            else if(o!=0 && o%18==0){
                cout << "Delapan Belas ";
            }
            else {cout << o << " ";}
        }
    }else {cout << "Input Salah";}
    return 0;
}

