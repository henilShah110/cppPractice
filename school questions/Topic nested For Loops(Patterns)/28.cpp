#include <iostream>
using namespace std ;

int main ()
{
	int space=2,line=1,y;
	char a='A';
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<space;j++)
			cout<<" ";
		
		y=0;
		for(int j=0;j<line;j++)
		{
			cout<<char(a+y);
			y+=2;
		}
		line+=2;
		
		for(int j=0;j<space;j++)
			cout<<" ";
		
		space--;
		
		cout<<endl;
	}
	space=1;
	line=3;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<space;j++)
			cout<<" ";
		space++;
		
		y=0;
		for(int j=0;j<line;j++)
		{
			cout<<char(a+y);
			y+=2;
		}
		line-=2;
		
		cout<<endl;
	}
		
		
	return 0;
}