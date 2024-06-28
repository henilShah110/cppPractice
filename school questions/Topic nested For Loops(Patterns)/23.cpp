#include <iostream>
using namespace std ;

int main ()
{
	char a;
	a='A';
	int x;
	for(int i=0;i<4;i++)
	{
		x=0;
		for(int j=0;j<i+1;j++)
		{
			cout<<char(a+x);
			x++;
		}
		cout<<endl;
	}
	return 0;
}