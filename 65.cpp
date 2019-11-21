#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a, b, c, d;
    a=n/1000;
    b=(n%1000)/100;
    c=(n%100)/10;
    d=n%10;
    if(a<5)
    {
        cout<<a;
        if(b<5)
        {
            cout<<b;
            if(c<5)
            {
                cout<<c;
                cout<<d;
            }
            else if(d<5)
            {
                cout<<d;
                cout<<c;
            }
            else
            {
                cout<<c<<d;
            }

        }
        else if(c<5)
        {
            cout<<c;
            if(b<5)
            {
                cout<<b;
                cout<<d;
            }
            else if(d<5)
            {
                cout<<d;
                cout<<b;
            }
            else
            {
                cout<<b<<d;
            }
        }
        else if(d<5)
        {
            cout<<d;
            if(b<5)
            {
                cout<<b;
                cout<<c;
            }
            else if(c<5)
            {
                cout<<c;
                cout<<b;
            }
            else
            {
                cout<<d<<b;
            }
        }
        else
        {
            cout<<b<<c<<d;
        }
    }
    else if(b<5)
    {
        cout<<b;
        if(a<5)
        {
            cout<<a;
            if(c<5)
            {
                cout<<c;
                cout<<d;
            }
            else if(d<5)
            {
                cout<<d;
                cout<<c;
            }
            else
            {
                cout<<c<<d;
            }
        }
        else if(c<5)
        {
            cout<<c;
            if(a<5)
            {
                cout<<a;
                cout<<d;
            }
            else if(d<5)
            {
                cout<<d;
                cout<<a;
            }
            else
            {
                cout<<a<<d;
            }
        }
        else if(d<5)
        {
            cout<<d;
            if(a<5)
            {
                cout<<a;
                cout<<c;
            }
            else if(c<5)
            {
                cout<<c;
                cout<<a;
            }
            else
            {
                cout<<a<<c;
            }
        }
        else
        {
            cout<<a<<c<<d;
        }
    }
    else if(c<5)
    {
        cout<<c;
        if(a<5)
        {
            cout<<a;
            if(b<5)
            {
                cout<<b;
                cout<<d;
            }
            else if(d<5)
            {
                cout<<d;
                cout<<b;
            }
            else
            {
                cout<<b<<d;
            }
        }
        else if(b<5)
        {
            cout<<b;
            if(a<5)
            {
                cout<<a;
                cout<<d;
            }
            else if(d<5)
            {
                cout<<d;
                cout<<a;
            }
            else
            {
                cout<<a<<d;
            }
        }
        else if(d<5)
        {
            cout<<d;
            if(a<5)
            {
                cout<<a;
                cout<<b;
            }
            else if(b<5)
            {
                cout<<b;
                cout<<a;
            }
            else
            {
                cout<<a<<b;
            }
        }
        else
        {
            cout<<a<<b<<d;
        }
    }
    else if(d<5)
    {
        cout<<d;
        if(a<5)
        {
            cout<<a;
            if(b<5)
            {
                cout<<b;
                cout<<c;
            }
            else if(c<5)
            {
                cout<<c;
                cout<<b;
            }
            else
            {
                cout<<b<<c;
            }
        }
        else if(b<5)
        {
            cout<<b;
            if(a<5)
            {
                cout<<a;
                cout<<c;
            }
            else if(c<5)
            {
                cout<<c;
                cout<<a;
            }
            else
            {
                cout<<a<<c;
            }
        }
        else if(c<5)
        {
            cout<<c;
            if(a<5)
            {
                cout<<a;
                cout<<b;
            }
            else if(b<5)
            {
                cout<<b;
                cout<<a;
            }
            else
            {
                cout<<a<<b;
            }
        }
        else
        {
            cout<<a<<b<<c;
        }
    }
    else
    {
        cout<<n;
    }
}
