#include <iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	
	for(int i=1; i<=k; i++){
		if(i==5)
		continue;
		if(k<=29){
			cout<<i<<endl;
		}
		
		if(k>29){
			cout<<i<<endl;
			if(i>28){
				cout<<"NOT FOUND"<<endl;
				break;
			}
		}
	}
	
}
