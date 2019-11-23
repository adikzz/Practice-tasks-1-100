#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int counter0=0,counter2=0,n;
    for (int i=0;i<5;i++)
    {
        n = rand()%3;
        if(n==0)
            counter0++;
        else if(n==2)
            counter2++;
        cout<<n;
    }
    while(counter0!=counter2)
    {
        n = rand()%3;
        if(n==0)
            counter0++;
        else if(n==2)
            counter2++;
        cout<<n;
    }
}
