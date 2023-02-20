#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    float k, y;
    cin >> k;
    
    if ((k >= 0 && k < 149000)) {
    y = k;
    }
    
    else if ((k >= 149000 && k < 249000)) {
        y = k - (0.1*k);
    }
    
    else if ((k >= 249000 && k  < 349000)) {
        y = k - (0.2*k);
    }
    
     else if ((k >= 349000 && k  < 449000)) {
        y = k - (0.3*k);
    }
    
     else if ((k >= 449000 && k  < 549000)) {
        y = k - (0.4*k);
    }
    
     else {
        y = k - (0.5*k);
    }
    
    cout <<y ;
    return 0;
}

