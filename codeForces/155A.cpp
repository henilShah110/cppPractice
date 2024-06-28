#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n ;i++)
		cin>>a[i];
	
	int small=a[0],big = a[0];
	int count_s=0;
	int count_b=0;
	for(int j=1; j<n ; j++)
	{
		if(a[j]>big)
		{
			count_b++;
			big=a[j];
		}
		else if(a[j]<small)
		{
			count_s++;
			small=a[j];
		}
	}
	int total = count_s + count_b;
	
	cout<<total;
	
	return 0;
}