#include <iostream>
using namespace std ;

int main ()
{
	int limak , bob , k;
	k = 0;
	cin >> limak >> bob;
	for (int i = 1 ; i > 0 ; i++)
	{
		limak = limak * 3;
		bob = bob * 2;
		k++;
		if ( limak > bob)
		{
			cout << k;
			break;
		}
	}
	return 0;
}