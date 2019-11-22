#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    for (char i='a'; i<='z'; i++)
    {
        if(counter%5==0&&counter!=0)
        {
            cout<<endl;
        }
        cout<<i<<' ';
        counter++;
    }
}
