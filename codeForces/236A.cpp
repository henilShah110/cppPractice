#include <iostream>
using namespace std ;

int main ()
{
	string s;
	cin>>s;
	int len=s.length();
	int l=0;
	for(int i=0;i<len;i++)
	{
		for(int j=i-1;j>=0;j--)
			if(s[j]==s[i])
			{
				l++;
				break;
			}
	}
	int k=len-l;
	if(k%2!=0)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";
	
	return 0;
}