#include <bits/stdc++.h>
using namespace std;

bool Prime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    int n;
    cin>>n;
        for(int i=1;i<n;i++)
        {
            if(Prime(i)&&Prime(i + 2))
            {
                cout<<i<<" "<<i + 2<<" are pairs"<<endl;
            }
        }

}
