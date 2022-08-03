#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i, j, count = 0, arr[n * 2];

    for (i = 0; i < (n * 2); i++)
    {
        cin>>arr[i];
        
    }

    for (i = 0; i < n * 2; i +=2)
    {
        

        for (j = 1; j < n * 2; j+=2)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }

        }
    }

    cout << count;

    cout << endl;
    return main();
}