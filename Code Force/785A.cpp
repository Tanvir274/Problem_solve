#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;

    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        if(str[i]=="Tetrahedron")
        {
            count=count+4;

        }
        if(str[i]=="Cube")
        {
            count=count+6;

        }
        if(str[i]=="Octahedron")
        {
            count=count+8;

        }
        if(str[i]=="Dodecahedron")
        {
            count=count+12;

        }
        if(str[i]=="Icosahedron")
        {
            count=count+20;

        }
    }

    

    cout<<count;

    cout<<endl;
    return main();

}