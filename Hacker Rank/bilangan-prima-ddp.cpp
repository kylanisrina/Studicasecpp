#include <iostream>
using namespace std;


int main() {
     int a;
    cin >> a;
    
    if (a == 2 || a == 3 || a == 5 || a == 7 || a == 11 || a == 13 || a == 17 || a== 19 || a == 29 || a == 23) {
        cout << "Bilangan Prima";
    }
    
    else {
        cout << "Bukan Bilangan Prima";
    }
    return 0;
}
