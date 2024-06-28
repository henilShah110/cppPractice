#include <iostream>
using namespace std ;

int main ()
{
	char a;
	a='A';
	int x=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<char(a+x);
		}
		cout<<endl;
		x++;
	}
	return 0;
}