#include <iostream>
using namespace std ;

int main ()
{
	int n,e=0,o=0,indexe,indexo;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			e++;
			indexe=i;
		}
		else
		{
			o++;
			indexo=i;
		}
	}
	if(e>o)
		cout<<indexo+1;
	else
		cout<<indexe+1;
	return 0;
}