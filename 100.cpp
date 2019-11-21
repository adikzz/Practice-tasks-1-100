#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    for(int i=1000;i<10000;i++)
    {
        a=i/1000;
        b=(i%1000)/100;
        c=(i%100)/10;
        d=i%10;
        if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))
        {
            if((a!=5)&&(a!=6)&&(b!=5)&&(b!=6)&&(c!=5)&&(c!=6)&&(d!=5)&&(d!=6))
            {
                cout<<i<<endl;
            }
        }
    }
}
