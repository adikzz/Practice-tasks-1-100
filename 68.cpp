#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    double x,x1,x2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+pow(d,0.5))/(2*a);
        x2=(-b-pow(d,0.5))/(2*a);
        cout<<x1<<" "<<x2;
    }
    else if(d==0)
    {
        x=-b/(2*a);
        cout<<x;
    }
    else
    {
        cout<<"No roots";
    }
}
