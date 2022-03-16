/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the sum, product, difference,and quotient of any two numbers to screen
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,s,p,q,d;
    cin >>a>>b;
    s=a+b;
    p=a*b;
    d=a-b;
    q=a/b;
    cout <<"sum:"<<s<<endl;
    cout <<"product:"<<p<<endl;
    cout <<"difference:"<<d<<endl;
    cout <<"quotient:"<<q<<endl;
    return 0;
}
