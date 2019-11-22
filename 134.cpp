#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  x0, y0, k=0,r;
    cin>>x0>>y0>>r;
    for(int i=x0-r; i<=x0+r; i++)
    {
        for(int j=y0-r; j<=y0+r; j++)
        {
            if(i*i+j*j<=r*r)
            {
                k++;
            }
        }
    }
    cout<<k;
}
