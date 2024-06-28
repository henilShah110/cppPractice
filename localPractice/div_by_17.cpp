#include <iostream>
using namespace std;

int main ()
{
	int b , a;
	cout << "Enter your Number. \n";
	cin >> a;
	b = a % 17 ;
	if ( b == 0 )
		cout << " Yes ";
	else 
	{
		cout << " No ";
	}
	return 0;
}
	