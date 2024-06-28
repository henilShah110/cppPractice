#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	
	if (n > 0)
		cout << n;
	else
	{
		int k1,k2;
		
		k1 = n - (n%10);
		k1 /= 10;
		//cout << "k1 = " << k1 << endl;
		
		k2 = n - (n%100);
		k2 /= 10;
		k2 += (n%10);
		//cout << "k2 = " << k2 << endl;
		
		if(k1 > k2)
			cout << k1;
		else
			cout << k2;
	}
	return 0;
}