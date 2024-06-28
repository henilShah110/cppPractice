#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string s;
	cin>>s;
	int n=s.length();
	cout<<n<<" ";
	int k=0;
	if(n<3)
		cout<<0;
	else
	{
		for(int i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
			for(int j=i-1;j>=0;j--)
			{
				cout<<s[j]<<" ";
				if(s[i]==s[j])
					break;
				else if(s[i]!=s[j] && j==0)
					k++;
			}
		}
		cout<<k;
	}
				
	return 0;
}

