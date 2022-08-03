#include <iostream>
using namespace std;

void print(string str, int s, int e)
{
    for (int i = s + 1; i < e; i++)
    {
        cout << str[i];
    }
}
int main()
{
    string str;
    cin >> str;

    int i, l = str.length(), fi = -1, li = -1;

    for (i = l - 1; i >= 0; i--)
    {
        if(int(str[i])==47 || int(str[i])== 92)
        {
            if (li == -1 || fi == -1)
            {
                if (li == -1)
                {
                    li = i;
                }
                else
                {
                    fi = i;
                    print(str, fi, li);
                    li = fi;
                    fi = -2;
                }
            }
            else if (fi == -2)
            {
                fi = i;
                print(str, fi, li);
                li = fi;
                fi = -2;
            }

        }
    }

        
    
}