#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10000];
    int sum=0;
    for (int i =0; i<10000; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(a[i]==0)
            break ;
    }
    cout<<sum;
}
