#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    srand(time(0));
    a=rand()%100+1;
    b=rand()%100+1;
    c=rand()%100+1;
    if(a==b || a==c ||b==c)
    {
        main();
    }
    else
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
