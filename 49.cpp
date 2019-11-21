#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,maxi=0;
    cin>>a>>b>>c>>d;
    if(a>=b && a>=c && a>=d && a%2==0)
        maxi = a;
    else if(b>=a && b>=c && b>=d && b%2==0)
        maxi = b;
    else if(c>=b && c>=a && c>=d && c%2==0)
        maxi = c;
    else if(d>=b && d>=c && d>=a && d%2==0)
        maxi = d;
    else
        {
            cout <<"Not found"<<endl;
        }
    cout << maxi;
}
