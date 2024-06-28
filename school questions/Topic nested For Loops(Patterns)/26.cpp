#include <iostream>
using namespace std ;

int main ()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3-i;j++)
			cout<<" ";
		
		for(int j=0;j<i+1;j++)
			cout<<"* ";
		
		for(int j=0;j<3-i;j++)
			cout<<" ";
		
		cout<<endl;
	}
	int x=3;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<i+1;j++)
			cout<<" ";
		
		for(int j=0;j<i+x;j++)
			cout<<"* ";
		
	
		
		for(int j=0;j<i+1;j++)
			cout<<" ";
		
		cout<<endl;
		x=x-2;
	}
		
	return 0;
}