#include <iostream> 
using namespace std;
 int main() {
 	
 	int k, y=0, l=1, a=0;
 	cin>>k;
 	for(int x=1; x<=k; x++)
 	{
 		if(x==1){
 			cout<<y<< " ";
 			continue;
		 }
		 if(x==2){
		 	cout<<l<< " ";
		 	continue;
		 }
		 a=y+l;
		 y=l;
		 l=a;
	   	cout<<a<< " ";

 } 
return 0; 
}
