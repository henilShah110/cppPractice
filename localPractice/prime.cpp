#include <iostream>
using namespace std;

int main()
{
	int x , y , m , n ;
	cout << "Enter your number!\n" ;
	cin >> x ;
	bool a = true;
	for ( 	n = x - 1  ; n > 1  ;  n-- )
	{
		if ( x % n == 0 )
		{
			a = false; 
			break;
		}
	}
	if(a) cout<<"YES";
	else cout<<"NO";
	return 0 ;
}