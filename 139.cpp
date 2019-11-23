#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int counter2=0,counter3=0,counter31=0,counter21=0,a;
    for(int i=1;i<=10;i++)
    {
        a = rand()%3+1;
        cout<<a;
        if(a==2)
            counter2++;
        if(a==3)
            counter3++;
        if((i%2==0)&&(a==3))
            counter31++;
        if((i<=5)&&(a==2))
            counter21++;
    }
    if(counter2>=counter3)
        cout<<endl<<"a) Amount of 2 bigger than number of 3 by: "<<counter2-counter3<<endl;
    else
        cout<<endl<<"a) Amount of 3 bigger than number of 2 by: "<<counter3-counter2<<endl;
    cout<<"b) Amount of 3 that are located on even positions: "<<counter31<<endl;
    cout<<"c) Amount of 2 that are located on first 5 positions: "<<counter21<<endl;
}
