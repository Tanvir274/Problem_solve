#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n, output = 0;
    cin >> s >> n;

    pair<int, int> arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i].first < s)
        {
            s = s + arr[i].second;
            output = 1;
        }
        else
        {
            output = 0;
            break;
        }
    }

    if (output == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
    return main();
}