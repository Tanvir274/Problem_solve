#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, v, count = 0;
    cin >> h >> v;

    if (h == v)
    {
        if (h % 2 == 0)
        {
            cout << "Malvika";
        }
        else
        {
            cout << "Akshat";
        }
    }
    else if (h < v)
    {
        if (h % 2 == 0)
        {
            cout << "Malvika";
        }
        else
        {
            cout << "Akshat";
        }
    }
    else if (h > v)
    {
        if (v % 2 == 0)
        {
            cout << "Malvika";
        }
        else
        {
            cout << "Akshat";
        }
    }

    return main();
}