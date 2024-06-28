#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string s;
	cin>>s;
	int sU=0,sL=0,len=s.length();
	for(int i=0;i<len;i++)
	{
		if('a'<=s[i] && s[i]<='z')
			sL++;
		if('A'<=s[i] && s[i]<='Z')
			sU++;
	}
	if(sU>sL)
		for(int i=0;i<len;i++)
		{
			if('a'<=s[i] && s[i]<='z')
				s[i]=char (s[i]-32);
		}
	else
		for(int i=0;i<len;i++)
		{
			if('A'<=s[i] && s[i]<='Z')
				s[i]=char (s[i]+32);
		}
	cout<<s;
	return 0;
}