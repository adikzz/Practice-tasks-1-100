#include <bits/stdc++.h>
using namespace std;

int main ()
{
    for(int i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
        }
        else
        {
            for(int j=0;j<=10;j++)
            {
                cout<<1<<" ";
            }
        }
    cout<<endl;
    }
}
