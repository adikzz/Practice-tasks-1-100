#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b;
    double c;
    cin>>b;
    for(double i=1;i<=100;i++)
    {
        c=(b*i)/20;
        cout<<i<<"$ - "<<b*i<<" p - "<<c<<" kg"<<endl;
    }
}
