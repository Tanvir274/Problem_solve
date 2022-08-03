#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, high = 0, low = 0, count = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    high = arr[0];
    if(n>1)
    {
        if (arr[1] > high)
        {
            count++;
        
            low = high;
            high = arr[1];
        }
        else if (arr[1] < high)
        {
            count++;
        
            low = arr[1];
        }
        else if (arr[1] == high)
        {
            low = arr[1];
        }

    }

    

    for (int i = 2; i < n; i++)
    {
        if (high < arr[i])
        {

            count++;
            high = arr[i];
        }
        if (arr[i] < low)
        {
            count++;
            low = arr[i];
        }
    }

    cout << count;
}