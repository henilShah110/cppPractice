#include <iostream>
using namespace std ;

int main ()
{
	int size, maxSize = 100, index, value;
	int arr[maxSize];
	
	cout << "Enter size: ";
	cin >> size;
	cout << "Enter array: \n";
	for ( int x = 0 ; x < size ; x++ )
		cin >> arr[x];
	cout << "Your array is: ";
	for ( int i = 0 ; i < size ; i++)
		cout << arr[i] << " ";
	cout<<"\n";
	
	while (true)
	{
		cout << "\nChoose any option:\n";
		cout << "1.Insert\n2.Delete\n3.Replace\n4.Exit\n";
		int option;
		cin >> option;
		cout<<"\n";
		if ( option == 1)
		{
			if ( size == maxSize)
				cout << "Memory is full, cannot use insert anymore.\n";
			else
			{
				cout << "Enter value: ";
				cin >> value;
				cout << "Enter index: ";
				cin >> index;
				
				size++;
				for ( int i = size; i >= index ; i--)
				{
					if ( i == index )
						arr[i] = value;
					else
						arr[i] = arr[i-1];
				}
				
				cout << "Your updated array is: ";
				for ( int i = 0 ; i < size ; i++)
					cout << arr[i] << " ";
				cout<<"\n";
				
			}
		}
		else if ( option == 2)
		{
			if ( size == 0)
				cout << "Error you are out of data to delete";
			else 
			{
				cout << "Enter Index: ";
				cin >> index;
				size--;
				for ( int i = index ; i < size ; i++)
					arr[i] = arr[i+1];
			}
			cout << "Your updated array is: ";
			for ( int i = 0 ; i < size ; i++)
				cout << arr[i] << " ";
			cout<<"\n";
		}
		else if (option == 3 )
		{
			cout << "Enter value: ";
			cin >> value;
			cout << "Enter index: ";
			cin >> index;
				
			arr[index] = value;
			cout << "Your updated array is: ";
			for ( int i = 0 ; i < size ; i++)
				cout << arr[i] << " ";
			cout<<"\n";
		}
		else if ( option == 4)
		{
			cout << "This is your final array: ";
			for ( int i = 0 ; i < size ; i++)
				cout << arr[i] << " ";
			break;
		}
	}
	
	return 0;
}