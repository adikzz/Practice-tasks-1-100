#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,counter;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        counter=0;
        for(int j = 1; j < i/2 + 1; j++)
        {
            if(i % j == 0)
                counter+=j;
        }
        if(counter==i)
            cout<<i<<endl;
    }
}
