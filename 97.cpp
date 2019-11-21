#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,sum,counter;
        cin>>n;
        sum = 0;
        for(i = 1; i <= n; i++)
        {
            counter = 1;
            for(j = i; j < i + (i + 1); j++)
            {
                counter *= j;
            }
            sum += counter;
        }
    cout<<sum;
}
