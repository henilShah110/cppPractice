#include <iostream>
using namespace std ;

int main ()
{
	int n=5;
	for(int i=0;i<2;i++)
	{
		cout<<"*";
		for(int j=0;j<n+2;j++)
			cout<<" ";
		cout<<"*\n";
		
	}
	
	for(int i=0;i<n;i++)
		cout<<"* ";
	cout<<"\n";
	
	for(int i=0;i<2;i++)
	{
		cout<<"*";
		for(int j=0;j<n+2;j++)
			cout<<" ";
		cout<<"*\n";
	}
	
	return 0;
}