#include <iostream>
using namespace std;

int main()
{
   int a1,b1,a2,b2;
   int x1,y1,x2,y2;
   int S1,S2;
   cout <<"размеры сторон первого прямоугольника и Координаты:";
   cin>>a1>>b1>>x1>>y1;
   cout <<" размеры сторон второго прямоугольника и оординаты:";
cin>>a2>>b2>>x2>>y2;
if (a1*b1<a2*b2){
    if (x1<=x2 && x2+a2<=a1+x1 && y1<=y2 && y2+b2<=y1+b1)
    cout<< "  все точки первого прямоугольника принадлежат второму";
}
else if  (x2<=x1 && x1+a1<=a2+x2 && y2<=y1 && y1+b1<=y2+b2)
cout<<" все точки второго прямоугольника  принадлежат первому";
else cout<<" не  все точки одного из прямоугольников принадлежат  другому";
    return 0;
}
