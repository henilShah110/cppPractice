#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string s;
	cin >> s;
	int len = s.length();
	//cout << len << endl;
	
	for (int i = 0 ; i < len ; i++)
	{
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
			i+=2;
		else if (s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B')
			cout << s[i] << " ";
		else
			cout << s[i];
	}
	
	
	
	return 0;
}