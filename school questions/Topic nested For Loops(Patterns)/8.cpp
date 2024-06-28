#include <iostream>
using namespace std ;

int main ()
{
	int x=1;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3-i;j++)
			cout<<" ";
		
		for(int j=0;j<i+1;j++)
			cout<<x;
		x++;
		cout<<endl;
	}
	return 0;
}