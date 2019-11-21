#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a, b, c, d;
    a=n/1000;
    b=(n%1000)/100;
    c=(n%100)/10;
    d=n%10;
    if (a>b && b>c && c>d) cout<<"Yes";
    else cout<<"No";
}
