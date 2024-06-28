#include <iostream>
using namespace std;

int main()

{
	int i , cnt ;
	
	cnt = 0;
	i = 0 ;
	
	while ( cnt <= 100)
	{
		if ((2*i - 1)  % 17 == 0)
		{ 
			cout << i << " "; 
			cnt++;
		}
		i++;
		
	}
	

	
	return 0;
}