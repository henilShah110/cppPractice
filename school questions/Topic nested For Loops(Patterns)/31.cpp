#include <iostream>
using namespace std ;

int main ()
{
	int space=3,line=1,y;
	char a='D';
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<space;j++)
			cout<<" ";
		
		y=i-3;
		for(int j=0;j<line;j++)
		{
			cout<<char(a+y);
			y--;
		}
		line++;
		
		space--;
		
		cout<<endl;
	}
	return 0;
}