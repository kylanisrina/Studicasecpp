#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int k;
    cin>>k;
    for(int i=0; i <= k-1; i++){
    for(int j = k; j > i; j--){
        cout<<" ";
    }
        for(int y=1; y <=(2 * i -1); y++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    return 0;
}

