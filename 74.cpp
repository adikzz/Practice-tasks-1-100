#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="";
    for(int i=10;i<100;i++)
    {
        stringstream ss;
        ss<<i;
        string s2 = ss.str();
        s=s+s2;
    }
    int k;
    cin>>k;
    for(int i=1;i<180;i++)
    {
        if(k==i)
            cout<<s[i-1];
    }
}
