#include <bits/stdc++.h>
using namespace std;

int sum(int *k)
{
    int a,b,c,d,e,f,s;
    a =  *k/100000;
    b = (*k/ 10000 )%10;
    c = (*k/ 1000)%10;
    d= (*k/ 100)%10;
    e= (*k/ 10)%10;
    f=*k%10;
    s=a+b+c+d+e+f;
    return s;
}
int main () {
    int a,b;
    for (int i=100000; i<=999999; i++)
    {
        int j=i+1;
        a=sum(&i);
        b=sum(&j);
        if(a%13==0 && b%13==0)
        {
            cout<<i<<" and "<<j<<endl;
        }
    }
}
