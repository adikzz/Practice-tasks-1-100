#include <bits/stdc++.h>
using namespace std;

int main()
{
    double day, discount, money;
    cin>>day>>discount>>money;
    for(int i=1;i<=day;i++)
        {
            money = money+3;
        }
    money = money*(discount/100) + money;
    cout<<money;

}
