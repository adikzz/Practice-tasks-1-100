#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    string  a;
    cin>>a;
    for(int i=0; i<a.length();i++)
    {
        if((int (a[i])-48)%2==0)
            counter++;
    }
    cout<<counter;
}
