#include <iostream>
using namespace std ;

int main ()
{
	int input , digito , digitt , digith , digitth ;
	cin >> input;
	for (int i = input+1 ; i > 0 ; i++)
	{
		digito = i % 10;
		digitt = ((i%100)-(i%10))/10;
		digith = ((i % 1000) - (i%100))/100;
		digitth = ((i)-(i%1000))/1000;
		
		if(digito != digitt)
		{
			if ( digito != digith)
			{
				if ( digito != digitth)
				{
					if ( digitt != digith )
					{
						if( digitt != digitth)
						{
							if ( digith != digitth)
							{
								cout << i;
								break;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}