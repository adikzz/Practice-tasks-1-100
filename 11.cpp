#include <bits/stdc++.h>
using namespace std;

int main()
{
    double  x;
    cin>>x;
    if(x<0)
        cout<<((x-5)*(-1)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3;
    else
        cout<<((x-5)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3;
}
