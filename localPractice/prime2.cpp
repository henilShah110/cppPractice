#include <iostream>
using namespace std;

int main()
{
	int x , n , no , z  , y;
	cout << "Enter your number!\n" ;
	cin >> no ;
	cout << "\n";
	cout << "1: NO \n";
	y = 0 ;
	
	for ( z = 2 ; z <= no ; z++ )
	{
		bool a = true;
		for ( 	n = z - 1  ; n > 1  ;  n-- )
		{
			if ( z % n == 0 )
			{
				a = false; 
				break;
			}
		}
		if(a)
		{			
			cout<<z << ": YES \n";
			y++;
		}
		else cout<<z << ": NO \n";
	}
	
	cout << "Prime counter: " << y << "\n" ;
	
	
	
	return 0 ;
}