#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string a;
	cin>>a;
	int len=a.length(),count=0,c1=0;
	for(int i=0;i<len;i++)
		if('A'<=a[i] && a[i]<='Z')
			count++;
		
	for(int i=1;i<len;i++)
		if('A'<=a[i] && a[i]<='Z')
			c1++;
		
	if(count==len)
	{
		for(int i=0;i<len;i++)
			if('A'<=a[i] && a[i]<='Z')
				a[i]=char (a[i]+32);
	}	
	else if(c1==len-1)
	{
		if('a'<=a[0] && a[0]<='z')
			a[0]=char (a[0]-32);
		
		for(int i=1;i<len;i++)
			if('A'<=a[i] && a[i]<='Z')
				a[i]=char (a[i]+32);
	}
		
	cout<<a;
	return 0;
}