#include <iostream>
#include <algorithm>
using namespace std;

// Utility function to print contents of an array
void print(int arr[], int n)
{
    cout<<"OUTPUT: ";
	for (int i = 0; i < n; i++) {
		cout<< arr[i] << " ";
	}
}

// Utility function to reverse elements of an array
void reverse(int arr[], int n)
{
	reverse(arr, arr + n);
}

int main()
{

    int arr[]={10,13,20,35};


	int n = sizeof (arr)/sizeof(arr[0]);

	reverse(arr, n);
	print(arr, n);

	return 0;
}
