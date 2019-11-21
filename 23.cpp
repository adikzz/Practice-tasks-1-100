#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, a, y;
    double k;
    cin>>x>>a>>y>>k;
    y=y*a/x;
    k=k/(a/x);
    cout<<y<<"rubl."<<" "<<k<<"kg";
}
