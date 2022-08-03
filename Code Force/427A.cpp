#include <iostream>
using namespace std;

int main()
{
    int n, h = 0, result = 0, temp = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        if (temp > 0)
        {
            h = h + temp;
        }
        if (h > 0 && temp == -1)
        {
            h--;
        }
        else if (h <= 0 && temp == -1)
        {
            result++;
        }
    }
    cout << result << endl;
    return main();
}