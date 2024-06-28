#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	int n,len;
	cin>>n;
	string a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		len=a.length();
		cout<<a[0];
		for(int j=1;j<len-1;j+=2)
			cout<<a[j];
		cout<<a[len-1]<<endl;
	}
	return 0;
}