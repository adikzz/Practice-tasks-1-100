#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10000];
    int counter=0;
    for (int i=0; i<10000; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            break;
        else if(a[i]%2==0)
            counter++;
    }
    cout<<counter;
}
