#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,p=1;
    cin>>a>>n;
    for(double i=1;i<=n;i++)
    {
        p=p*pow((a+i),2);
    }
    cout<<p;
}
