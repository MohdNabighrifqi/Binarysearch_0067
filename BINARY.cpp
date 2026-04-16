#include <iostream>
using namespace std;

int arr[20]; // Array
int n;		 // Many elements that put in into array
int i;		 // index at array

void input()
{
	while (true)
	{
		cout << "Enter the Number of elements in the Array : ";
		cin >> n;

		if ((n > 0) && n <= 20)
			break;
		else
			cout << "\n\nThe array should have minimum 1 and maximum 20 array" << endl;
	}
	cout << "\n----------------------\n";
	cout << " \nEnter Array elements \n";
	cout << "\n----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
