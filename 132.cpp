#include <bits/stdc++.h>
using namespace std;

int myfunc(int x)
{
    int a,j,t=0,y=x;
    while (y>0)
    {
        a=y%10;
        t=t+1;
        y=y/10;
    }
    j=0;
    while(x>0)
    {
        a=x%10;
        j=j+round(pow(a,t));
        x=x/10;
    }
    return j;
}

int main()
{
    for(int i=1;i<=10000;i++)
    {
        if(i==myfunc(i))
        {
            cout<<i<<" ";
            cout<<endl;
        }
    }
}
