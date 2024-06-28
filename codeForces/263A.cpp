#include <iostream>
using namespace std ;

int main ()
{
	int  j , n1 , n2 , n3 , n4 , n5 , row , column ;
	row = 0;
	column = 0;
	for (j=1 ; j <= 5 ; j++ )
	{
		cin >> n1 >> n2 >> n3 >> n4 >> n5 ;
		if ( n1 == 1 || n5 == 1)
			row = 2;
		else if ( n2 == 1 || n4 == 1)
			row = 1;
		if ( n2 == 1 || n4 == 1 || n1 == 1 || n5 == 1 || n3 == 1 )
			column = abs (3 - j );
	}
	cout << (row + column);
	return 0;
}