#include <iostream>
#include <string.h>
using namespace std ;

int main ()
{
	string s;
	int sum=0;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='H' ||s[i]=='Q' || s[i]=='9')
		{
			cout<<"YES";
			break;
		}
		else 
			sum++;
	}
	if(sum==len)
		cout<<"NO";
	return 0;
}