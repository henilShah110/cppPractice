#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string s,s1;
	cin>>s>>s1;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s1[i]!=s[len-i-1])
		{
			cout<<"NO";
			break;
		}
		if(i==len-1)
			cout<<"YES";
	}
	return 0;
}