#include <iostream>
using namespace std ;

int main ()
{
	int n , i , x;
	cin >> n;
	float prev1 = 1;
	float prev2 = 0;
	//cout << prev2 << " " << prev1;
	for ( i = 0; i < n ; i++)
	{
		x = prev2;
		prev2 = prev1;
		prev1 += x;
		cout << prev1/prev2 << " ";
	}
	return 0;
}