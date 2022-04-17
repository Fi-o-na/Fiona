#include <iostream>
#include <cmath>

using namespace std;
double distant(double x1,double y1,double x2, double y2)
{
    double s;
    s=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return s;
}

int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<distant(x1,y1,x2,y2)<<endl;
    return 0;
}
