/*
 * FileName: T4_33.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Judge whether three non-zero integers can form a right triangle.
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
    {
        cout<<"yes"<<endl;

    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
