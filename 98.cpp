#include <bits/stdc++.h>
using namespace std;

int main()
{
    //a
    double a=10;
    for(double i=2;i<=10;i++)
    {
        a=a+a*0.1;
        cout<<i<<" "<<a<<endl;
    }

    //b
    double sum1=0,a2=10;
    for(double i=0;i<7;i++)
    {
        sum1=sum1+a2;
        a2=a2+a2*0.1;
    }
    cout<<sum1<<endl;

    //c
    double n,sum2=0,a3=10;
    cout<<"Enter n: ";
    cin>>n;
    for(double i=0;i<n;i++)
    {
        sum2=sum2+a3;
        a3=a3+a3*0.1;
    }
    cout<<sum2<<endl;

    //d
    double sum3=0,a4=10;
    for(double i=1;i<=12;i++)
    {
        sum3=sum3+a4;
        if(sum3>80)
        {
            cout<<i-1<<endl;
            break;
        }
        a4=a4+a4*0.1;
    }
}
