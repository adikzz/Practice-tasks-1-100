#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day1,month1,year1;
    int day2,month2,year2;
    cin >>day1>>month1>>year1;
    cin >>day2>>month2>>year2;
    if (year1>year2) cout<<"Yes";
    else if (month1>month2)cout <<"Yes";
    else if (day1>day2) cout <<"Yes";
    else cout <<"No";

}
