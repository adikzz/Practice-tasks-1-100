#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter1=0,counter2=0;
    srand(time(0));
    while(counter1<15)
    {
        while(counter2<3)
        {
            int n = rand()%2;
            cout<<n<<" ";
            if(n==1)
                counter2++;
            counter1++;
        }
        int n=0;
        cout<<n<<" ";
        counter1++;
    }
}
