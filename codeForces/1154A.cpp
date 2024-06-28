#include <iostream>
using namespace std ;

int main ()
{
	
	int a[4];
	int position;
	int k = 0;
	for (int  i = 0 ; i < 4 ; i++)
	{
		cin >> a[i];
		if(a[i] > k)
		{
			k = a[i];
			position = i;
		}
	}
	//cout << a[position]<<endl;
	for (int j = 0 ; j < 4 ; j++)
		if(j != position)
			cout << a[position] - a[j] << " ";
			
		
	return 0;
}