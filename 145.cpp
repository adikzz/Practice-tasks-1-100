#include <bits/stdc++.h>
using namespace std;

int main()
{
    char user;
    cin>>user;
    if(user>='A'&&user<='Z')
    {
        user=user+32;
    }
    if(user=='x')
    {
        cout<<"y z a";
    }
    else if(user=='y')
    {
        cout<<"z a b";
    }
    else if(user=='z')
    {
        cout<<"a b c";
    }
    else if(user>='a'&&user<='z')
    {
        cout<<char(user+1)<<" "<<char(user+2)<<" "<<char(user+3);
    }
    else
    {
        cout<<"Error!";
    }
}
