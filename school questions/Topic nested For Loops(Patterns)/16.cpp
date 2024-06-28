#include <iostream>
using namespace std ;

int main ()
{
	int x;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3-i;j++)
			cout<<" ";
		
		x=1;
		for(int j=0;j<i+1;j++)
		{
			cout<<x<<" ";
			x++;
		}
		
		for(int j=0;j<2-i;j++)
			cout<<" ";
		
		cout<<endl;
	}
	return 0;
}