/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the sum, product,averege ,maximum and minimum of any three numbers to screen
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,S,A,P,m1,m2;
    cout << "Input three different integers: ";
    cin  >>a>>b>>c;
    S=a+b+c;
    A=(a+b+c)/3;
    P=a*b*c;
    if(a>b)
    {
        m1=a;m2=b;
        if(m1>c)
        {
            m1=m1;
            if(c>m2)
            {
                m2=m2;
            }
            else{m2=c;}
        }
        else{m1=c;}
    }
    else
    {
        m1=b;m2=a;
        if(m1>c)
        {
            m1=m1;
            if(c>m2)
            {
                m2=m2;
            }
            else{m2=c;}
        }
        else{m1=c;}
    }
    cout << "Sum is " << S << endl;
    cout << "Average is " << A << endl;
    cout << "Product is " << P << endl;
    cout << "Maximum is " << m1 << endl;
    cout << "Minimum is " << m2 << endl;
    return 0;
}
