#include <bits/stdc++.h>
using namespace std;

int main()
{
    time_t th;
    struct tm * ts;
    time (&th);
    ts = localtime(&th);
    cout<<"Current day, date and time is = "<< asctime(ts)<<"Adlet";
}
