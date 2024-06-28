#include <iostream>
using namespace std ;

int main ()
{
	int n=5;
	for(int i=0;i<n;i++)
		cout<<"* ";
	cout<<"\n";
	for(int i=0;i<n-2;i++)
	{
		for(int j=0;j<n-1;j++)
			cout<<" ";
		cout<<"*\n";
	}
	for(int i=0;i<n;i++)
		cout<<"* ";
	return 0;
}