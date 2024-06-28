#include <iostream>
using namespace std ;

int main ()
{
	int x;
	for(int i=0;i<5;i++)
	{
		x=5;
		for(int j=0;j<5-i;j++)
		{
			cout<<x;
			x--;
		}
		cout<<endl;
	}
	return 0;
}