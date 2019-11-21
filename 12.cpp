#include <bits/stdc++.h>
using namespace std;

int main()
{
    double  x;
    double e =2.71828182846;
    cin>>x;
    if(x<0)
        cout<<pow(e,x-2)+(-1)*(sin(x))-pow(x,4)*cos(1/x);
    else
        cout<<pow(e,x-2)+(sin(x))-pow(x,4)*cos(1/x);
}
