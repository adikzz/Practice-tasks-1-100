#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    for (int i=10000;i<100000;i++)
    {
        a=i/10000%10;
        b=i/1000%10;
        c=i/100%10;
        d=i/10%10;
        e=i%10;
        if(c%2==0 && (a+b+c+d+e)%4==0)
        {
            cout<<i<<" ";
        }
    }
}
