#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	float sum = 0;
	for ( float i = 1 ; i <= n ; i++)
	{
		float t = i+1;
		float k = i/t;
		sum += k;
	}
	cout << sum;
	return 0;
}