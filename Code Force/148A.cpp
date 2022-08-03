#include <iostream>
using namespace std;

int main()
{
    int arr[5], count = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= arr[4]; i++)
    {
        if (i % arr[0] == 0 || i % arr[1] == 0 || i % arr[2] == 0 || i % arr[3] == 0)
        {
            count++;
        }
    }

    cout << count;

    cout << endl;
    return main();
}