#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int maxi=INT_MIN;
    for(int i=0;i<n.length();i++)
    {
        if(int(n[i]-48>maxi))
        {
            maxi=int(n[i])-48;
        }
    }
    cout<<maxi;
}
