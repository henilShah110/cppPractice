#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string arr;
	cin>>arr;
	int len = arr.length();
	int tell=len;
	for(int i=0;i<tell;i++)
	{
		if('A'<=arr[i] && arr[i]<='Z')
				arr[i]=char (arr[i]+32);
			
		len = arr.length();
			
		if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='y' )
		{
			for ( int j = i; j<len ; j++)
					arr[j] = arr[j+1];
			arr.pop_back();
			i--;
		}
		
	}
	len=arr.length();
	
	int sat=0;
	for(int i=0;i<2*len;i++)
	{
		if(i%2==0)
			cout<<".";
		else
		{
			cout<<arr[sat];
			sat++;
		}
	}
	
	
		
	return 0;
}