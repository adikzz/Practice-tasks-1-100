#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b;
    if(sqrt(a)>=0&&sqrt(b)>=0)
    {
        c=sqrt(a-sqrt(b));
    }
    cout<<c;
}
