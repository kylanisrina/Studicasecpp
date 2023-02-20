#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int tahun;
    cin>>tahun;
      
      if (tahun%400==0){
      cout<<"Tahun Kabisat"<<endl;
          
      }else if(tahun%100 == 0){
    cout<<"Bukan Tahun Kabisat"<<endl;
          
      }else if(tahun%4==0){
    cout <<"Tahun Kabisat"<<endl;
          
  }else if(tahun%400 && tahun%100 && tahun%4){
      cout<<"Bukan Tahun Kabisat"<<endl;
  }
    return 0;
}

