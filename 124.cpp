#include <iostream>
using namespace std;
int main()
{
    int n;
    do {cin>>n;} while ((n<0)&&(n>10000));
    long long fib[10000];
    fib[0]=0;
    fib[1]=1;
    for (int i=2;i<9999;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    cout<<fib[n];
return 0;
}