#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,n,sum=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(1/cos(pow(x,i)));
    }
    cout<<sum;
}
