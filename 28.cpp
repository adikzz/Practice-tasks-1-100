#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b;
    b=b/100;
    for(int i = 0; i<5; i++)
        {
            a=(1+b)*a;
        }
    cout<<a;
}
