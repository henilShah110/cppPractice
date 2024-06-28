#include <iostream>
using namespace std ;

int main ()
{
	int i1 , i2 , i3 , n, x;
	cin >> n;
	
	i1 = 0;
	i2 = 1;
	if(n==1)
		i3 = i1;
	else if(n==2)
		i3 = i2;
	else
	{
		for(int j = 2 ; j < n ; j++)
		{
			i3 = i1 + i2;
			x = i2;
			i2 = i3;
			i1 = x;
		}
	}
	cout << i3;
		
	return 0;
}