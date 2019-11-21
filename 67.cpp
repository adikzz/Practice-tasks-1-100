#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int maxi=INT_MIN, mini=INT_MAX;
    int b,c;
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
        if(int(n[i])>=maxi)
        {
            maxi=int(n[i]);
            b=i;
        }
        if(int(n[i])<=mini)
        {
            mini=int(n[i]);
            c=i;
        }
    }
    swap(n[b],n[c]);
    for(int i=0;i<n.length();i++)
    {
        cout<<n[i];
    }
}
