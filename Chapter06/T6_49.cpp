/*
 * FileName: T6_49.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate the area of a circle.
 */
#include <iostream>

using namespace std;
double circleArea(double r)
{
    double pi=3.14,area;
    area=pi*r*r;
    return area;
}
int main()
{
    double r;
    cout << "Please input the radius of the circle: ";
    cin>>r;
    cout << circleArea(r) <<endl;
    return 0;
}
