/*
 * FileName: T6_27.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Find the minimum digital.
 */
#include <iostream>

using namespace std;
double getMin(double c, double a, double b)
{
    double d;
    if(a<b)
    {
        d=a;
    }
    else
    {
        d=b;
    }
    if(d<c)
    {
        d=d;
    }
    else
    {
        d=c;
    }
    return d;
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout << getMin( a,b,c)<<endl;
    return 0;
}
