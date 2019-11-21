#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day,month,year;
    cin >>day>>month>>year;
    switch (month)
    {
        case 1:
        if (1<day && day<31) cout<<"Yes";
        else cout <<"No";
        break;
        case 2:
        if (1<day && day<28) cout<<"Yes";
        else cout <<"No";
        break;
        case 3:
        if (1<day && day<31) cout<<"Yes";
        else cout <<"No";
        break;
        case 4:
        if (1<day && day<30) cout<<"Yes";
        else cout <<"No";
        break;
        case 5:
        if (1<day && day<31) cout<<"Yes";
        else cout <<"No";
        break;
        case 6:
        if (1<day && day<30) cout<<"Yes";
        else cout <<"No";
        break;
        case 7:
        if (1<day && day<31) cout<<"Yes";
        else cout <<"No";
        break;
        case 8:
        if (1<day && day<31) cout<<"Yes";
        else cout <<"No";
        break;
        case 9:
        if (1<day && day<30) cout<<"Yes";
        else cout <<"No";
        break;
        case 10:
        if (1<day && day<31) cout<<"Yes";
        else cout <<"No";
        break;
        case 11:
        if (1<day && day<30) cout<<"Yes";
        else cout <<"No";
        break;
        case 12:
        if (1<day && day<31) cout<<"Yes";
        else cout <<"No";
        break;
        default:
        cout<<"No";
        break;
    }
}
