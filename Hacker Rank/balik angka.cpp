#include <iostream>
using namespace std;

int main(){
    
    int k;
    cin>>k;
    
    int r=0;
    while(k>0)
    {
    	int d=k%10;
    	r=r*10+d;
    	k=k/10;
	}
	cout<<r<<endl;
	return 0;
}
