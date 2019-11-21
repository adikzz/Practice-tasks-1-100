#include <bits/stdc++.h>
using namespace std;

int main()
{
    int direction, N;
    cin>>direction>> N;
    direction=direction+N;
    switch (direction)
    {
        case 11:
        cout<<"север";
        break;
        case 12:
        cout<<"запад";
        break;
        case 13:
        cout<<"юг";
        break;
        case 14:
        cout<<"восток";
        break;
    }
}
