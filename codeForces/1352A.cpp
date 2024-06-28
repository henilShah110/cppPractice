#include <iostream>
using namespace std ;

int main ()
{
	int t;
	cin >> t;
	int a[t];
	
	int dig1,dig2,dig3,dig4,dig5;
	int count;
	
	for(int j = 0 ; j < t ; j++)
	{
		cin >> a[j];
		count = 0;
		dig1 = a[j] % 10;
		if(dig1 != 0)
			count++;
		
		dig2 = a[j] % 100;
		dig2 -= a[j] % 10;
		dig2 /= 10;
		if(dig2 != 0)
			count++;
		
		dig3 = a[j] % 1000;
		dig3 -= a[j] % 100;
		dig3 /= 100;
		if(dig3 != 0)
			count++;
		
		dig4 = a[j] % 10000;
		dig4 -= a[j] % 1000;
		dig4 /= 1000;
		if(dig4 != 0)
			count++;
		
		dig5 = a[j] % 100000;
		dig5 -= a[j] % 10000;
		dig5 /= 10000;
		if(dig5 != 0)
			count++;
		
		cout << count << endl;
		
		if(dig1 != 0)
			cout << dig1 * 1 << " ";
		if(dig2 != 0)
			cout << dig2 * 10 << " ";
		if(dig3 != 0)
			cout << dig3 * 100 << " ";
		if(dig4 != 0)
			cout << dig4 * 1000 << " ";
		if(dig5 != 0)
			cout << dig5 * 10000 << " ";
		
		cout << endl;
	}
	
	return 0;
}