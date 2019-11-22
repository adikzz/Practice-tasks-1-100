#include <bits/stdc++.h>
using namespace std;

int main () {
    int counter=0;
    while (counter<=10) {
        int a=rand()%2;
        cout<<a<<" ";
        counter=counter+a;
    }
    return 0;
}
