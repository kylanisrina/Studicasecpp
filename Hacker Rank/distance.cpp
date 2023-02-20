#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      
    int k,y,l=0,a=5,x=8,s=7,p=3,c; 
cin>>k;
cin>>y;

if(k==1 && y==2){ 
c=l+a;
cout<<c;
 
}else if(k==1 && y==3){
c=l+a+x;
cout<<c;
 
}else if(k==1 && y==4){ 
c=l+a+x+s;
cout<<c;

}else if(k==1 && y==5){ 
c=l+a+x+s+p; 
cout<<c;
 
}else if(k==2 && y==3){ 
c=l+x;
cout<<c;
 
}else if(k==2 && y==4){ 
c=l+x+s;
cout<<c;

}else if(k==2 && y==5){ 
c=l+x+s+p; 
cout<<c;

}else if(k==3 && y==4){ 
c=l+s;
cout<<c;

}else if(k==3 && y==5){ 
c=l+s+p;
cout<<c; 

}else if(k==1 && y==4){ 
c=l+a+x+s;
cout<<c; 

}else if(k==1 && y==5){ 
c=l+a+x+s+p;
cout<<c; 

}else if(k==2 && y==3){ 
c=l+x;
cout<<c;

}else if(k==2 && y==4){
c=l+x+s;
cout<<c;

}else if(k==2 && y==5){ 
c=l+x+s+p;
cout<<c;

}else if(k==3 && y==4){ 
c=l+s;
cout<<c; 

}else if(k==3 && y==5){
c=l+s+p;
cout<<c;
 
}else if(k==4 && y==5){
c=l+p;

cout<<c;

} else

{ cout<<"Error";



}

return 0;


}
    

