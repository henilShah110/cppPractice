#include <iostream>
using namespace std ;

int composite(int x)
{
	bool a = false;
	for ( int n = x - 1  ; n > 1  ;  n-- )
	{
		if ( x % n == 0 )
		{
			a = true; 
			break;
		}
	}
	if(a) return 0;
	else return 1;
	//this function checks if number is not prime. if it is composite return = 0
}

int main ()
{
	int number;
	cin >> number;
	
	for(int i = 4 ; i < number ; i++)
	{
		if(composite(i) == 0)
		{
			if(composite(number - i) == 0)
			{
				cout << i << " " << number - i;
				break;
			}
		}
	}
		

	return 0;
}