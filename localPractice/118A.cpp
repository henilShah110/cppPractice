#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string arr;
	cin>>arr;
	int len = arr.length();
	
	for(int i=0;i<len;i++)
	{
		if(arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U' || arr[i]=='Y' )
		{
			len--;
			for ( int j = i ; j<len ; j++)
					arr[j] = arr[j+1];
		}
		else
		{
			if('A'<=arr[i] && arr[i]<='Z')
				a[i]=char (a[i]+32);
			
			len++;
			for ( int j = len; j >= i-1 ; j--)
			{
				if ( j == i-1 )
					arr[j] = '.';
				else
					arr[j] = arr[j-1];
			}
			
		}
	}
	cout<<arr;
	return 0;
}