#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,counter=0;
    cin>>a>>b>>c;
    if(a<5)counter++;
    if(b<5)counter++;
    if(c<5)counter++;
    if(counter==2) cout<<"Yes";
    else cout << "No";
}
