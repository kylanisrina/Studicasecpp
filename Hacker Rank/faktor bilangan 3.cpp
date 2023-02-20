#include <iostream>
using namespace std;

int main(){

	int A;
	cin >> A;

	if( A >= 1 && A <= 1000 )
    {
		for( int i = A; i > 0; i--)
		{
			if( ( A % i) == 0 )
            {
				cout << i << endl;
			}
		}
	}
	return 0;
}
