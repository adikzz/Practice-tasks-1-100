#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,e;
    cin>>n;
    a=n/10000;
    b=(n%10000)/1000;
    c=(n%1000)/100;
    d=(n%100)/10;
    e=n%10;
    b=0;
    d=0;
    cout<<a<<b<<c<<d<<e;
}
