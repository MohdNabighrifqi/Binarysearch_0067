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
void BinarySearch()
{
	char ch;
	int comp;

	do
	{
		// Accept the element to be Searched
		cout << "\nEnter The Element that You Want to Search : ";
		int item;
		cin >> item;

		int lb;
		int ub;
		int mid;

		comp = 0;
		lb = 0;
		ub = n - 1;

		while (lb <= ub)
		{

			mid = (lb + ub) / 2;
			if (arr[mid] == item)
			{
				comp++;
				cout << "\n"
					 << item << " found at position " << mid + 1;
				break;
			}
			else
			{
				if (item < arr[mid])
				{
					comp++;
					ub = mid - 1;
				}
				else
				{
					comp++;
					lb = mid + 1;
				}
			}
		}
		if (lb > ub)

			cout << "\n"
				 << item << " Not found in the array ";
		cout << "\nThe number of comparison is  " << comp << endl;
		cout << "\nContinue to Search ? (y/n) : ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));
}
