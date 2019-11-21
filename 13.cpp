#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,a,b;
    cin>>a>>b>>x;
    cout<<pow(x*x+b,1/5)-(b*b*pow(sin(x+a),3))/x;
}
