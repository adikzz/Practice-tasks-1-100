#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool found = false;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
 }
