#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"Yes";
    else
    {
        swap(a,b);
        cout<<a<<" "<<b;
    }
}
