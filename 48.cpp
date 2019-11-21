#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,maxi=0;
    cin>>a>>b>>c;
    if(a+b>=maxi)
        maxi = a+b;
    else if(a+c>=maxi)
        maxi = a+c;
    else if(c+b>=maxi)
        maxi = c+b;

    if(maxi==a+b)
        cout<<a<<" "<<b;
    else if(maxi==a+c)
        cout<<a<<" "<<c;
    else if(maxi==c+b)
        cout<<c<<" "<<b;
}
