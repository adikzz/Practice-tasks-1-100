#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0, number, guess;
    srand(time(0));
    number=rand()%100+1;
    while(counter<3)
    {
        cout<<"Find the guessed number: ";
        cin>>guess;
        if (guess==number)
        {
            cout<<"You won!"<<endl;
            break;
        }
        if(counter==2)
        {
            cout<<"You lost! The number is:"<<number<<endl;
            break;
        }
        if(guess<number)
        {
            cout<<"Enter a bigger number."<<endl;
        }
        else if(guess>number)
        {
            cout<<"Enter a smaller number."<<endl;
        }
        counter++;
    }
}
