#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    for(int i=1000;i<10000;i++)
    {
       int a,b,c,d;
       a=i/1000%10;
       b=i/100%10;
       c=i/10%10;
       d=i%10;
       if((600*(a+b+c+d))<i)
       {
           counter++;
       }
    }
   cout<<counter;
}
