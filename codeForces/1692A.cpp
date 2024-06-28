#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int a,b,c,d;
	int k;
	
	for(int i = 0; i< n; i++)
	{
		k = 0;
		cin >> a >> b >> c >> d;
		if(b > a)
			k++;
		if(c > a)
			k++;
		if(d > a)
			k++;
		cout << k << endl;	
	}
	
	return 0;
}