#include <iostream>
using namespace std ;

int main ()
{
	int space=0,line=4,y;
	char a='e';
	for(int i=0;i<4;i++)
	{
		
		
		y=0;
		for(int j=0;j<line;j++)
		{
			cout<<char(a+y);
			y++;
		}
		line--;
		
		for(int j=0;j<space;j++)
			cout<<" ";
		
		space++;
		
		cout<<endl;
	}
	return 0;
}