#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    float a,b,c;
    char o;
    cin>>a;
    cin>>b;
    cin>>o;
    
    
    if(o == '+'){
        c = a+b;
    }else if(o == '-'){
        c = a-b;
    }else if(o == '*'){
        c = a*b;
    }else if(o == '/'){
        c = a/b;
    }
    
    cout<<c;
    return 0;
}

