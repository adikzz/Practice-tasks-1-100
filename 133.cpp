#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k,counter=0;
    bool b=1;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        counter=counter+i;
        if(counter==k)
        {
            b=0;
            break;
        }
    }
    if (b==1)
        cout<<"It does not exist.";
    else
        cout<<"It exists.";
}
