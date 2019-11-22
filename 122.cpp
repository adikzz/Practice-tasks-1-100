#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    string  a;
    cin>>a;
    for(int i=0; i<a.length();i++)
    {
        if((int (a[i])-48)>3 && int (a[i]-48)<8)
            counter++;
    }
    cout<<counter;
}
