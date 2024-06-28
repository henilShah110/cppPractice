#include <iostream>
using namespace std ;

int main ()
{
	int space=3,line=1,y;
	char a='z';
	for(int i=0;i<4;i++)
	{
		
		
		y=0;
		for(int j=0;j<line;j++)
		{
			cout<<char(a+y);
			y--;
		}
		line++;
		
		for(int j=0;j<space;j++)
			cout<<" ";
		
		space--;
		
		cout<<endl;
	}
	return 0;
}