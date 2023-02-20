#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    if( n > 0 && n < 1000000 )
    {
        for( int i = 0; i < n; i++ )
        {
            for( int j = i; j > 0; j-- )
            {
                cout << "  ";
            }
            for( int k = n; k > i; k-- )
            {
                cout << k << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

