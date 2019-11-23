#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    cout<<"Write the amount of the bricks: ";
    cin>>amount;
    int q=1,user;
    int a;
    while (amount>0)
    {
        if ((amount==1 || amount==2 || amount==3) && (q==0))
        {
            q=1;
            break;
        }
        if (q==1)
        {
            cout<<"How many bricks you want to remove: ";
            cin>>user;
            if(user>3)
            {
                cout<<"Error! You can remove maximum 3 bricks."<<endl;
            }
            else
            {
                amount-=user;
                q=0;
            }
        }
        else
        {
            srand(time(NULL));
            a = rand()%(3)+1;
            cout<<"Computer removed "<<a<<" bricks."<<endl;
            amount-=a;
            cout<<amount<<" left."<<endl;
            q=1;
        }
    }
    if (q==0)
        cout<<"You won!";
    else
        cout<<"Computer wins.";
    return 0;
}
