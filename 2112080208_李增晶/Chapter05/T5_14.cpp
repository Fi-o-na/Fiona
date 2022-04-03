/*
 * FileName: T5_14.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 1th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate total product sales.
 */
#include <iostream>

using namespace std;

int main()
{
    int i,a£»
    double b,sum;

    for (i=1;i<=5;i++)
    {
        sum=0;
        for(i=1;i<=5;i++)
        {
        cin>>a;
        switch(a)
        {
           case (1):
           {
               d=2.98;
               break;
           }
           case (2):
           {
               d=4.50;
               break;
           }
           case (3):
           {
               d=9.98;
               break;
           }
           case (4):
           {
               d=4.49;
               break;
           }
           case (5):
           {
               d=6.87;
               break;
           }
           cin>>b;
           sum+=sum+1.0*b*d;
        }
        }
    }
    cout << sum <<endl;
    return 0;
}
