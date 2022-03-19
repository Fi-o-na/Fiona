/*
 * FileName: T4_32.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Judge whether three non-zero double precision floating-point numbers can form a triangle.
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        cout<<"yes"<<endl;

    }
    else
        cout<<"no"<<endl;
    return 0;
}
