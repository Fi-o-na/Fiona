/*
 * FileName: T5_10.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 25th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print factorial.
 */
#include <iostream>

using namespace std;

int main()
{
    int i,j,m;
    for (i=1;i<=5;i++)
    {
        if(i=1)
        {
            m=1;
            for(j=1;j<=i;j++)
            {
                m=m*j;
            }
        }
        cout<<"1�Ľ׳�:";
        cout << m <<endl;
        if(i=2)
        {
            m=1;
            for(j=1;j<=i;j++)
            {
                m=m*j;
            }
        }
        cout<<"2�Ľ׳�:";
        cout << m <<endl;
        if(i=3)
        {
            m=1;
            for(j=1;j<=i;j++)
            {
                m=m*j;
            }
        }
        cout<<"3�Ľ׳�:";
        cout << m <<endl;
        if(i=4)
        {
            m=1;
            for(j=1;j<=i;j++)
            {
                m=m*j;
            }
        }
        cout<<"4�Ľ׳�:";
        cout << m <<endl;
        if(i=5)
        {
            m=1;
            for(j=1;j<=i;j++)
            {
                m=m*j;
            }
        }
        cout<<"5�Ľ׳�:";
        cout << m <<endl;
    }


    return 0;
}
