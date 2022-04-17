/*
 * FileName: T6_14.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Specific decimal rounding of numbers.
 */
#include <iostream>
#include <cmath>
using namespace std;
int roundToInteger(double x)
{
   int y;
   y=floor(x+0.5);
   return y;
}
int roundToTenths(double x)
{
   int y;
   y=floor(x*10+0.5)/10;
   return y;
}
int roundToHunderths(double x)
{
   int y;
   y=floor(x*100+0.5)/100;
   return y;
}
int roundThousandths(double x)
{
   int y;
   y=floor(x*1000+0.5)/1000;
   return y;
}

int main()
{
    double x;
    cin>>x;
    cout << x << "," << roundToInteger(x) << "," << roundToTenths(x) << "," << roundToHunderths(x) << "," << roundThousandths(x) <<endl;
    return 0;
}
