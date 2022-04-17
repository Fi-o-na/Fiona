/*
 * FileName: T6_19.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate the hypotenuse of right triangle.
 */
#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double a, double b)
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}
int main()
{
    double a,b;
    cin>>a>>b;
    cout << hypotenuse(a, b) <<endl;
    return 0;
}
