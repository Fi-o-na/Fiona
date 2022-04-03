/*
 * FileName: T5_05.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 25th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the sum of a series of integers.
 */
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int i,x,m,n,sum;
    cin >>n;

    x=100;
    sum=0;
    for (i=1;i<=abs(n);i++)
    {
        cout << x << ","<< i <<endl;
        m=i*x;
        cin >>m;
        sum+=m;
    }
    cout << sum <<endl;
    return 0;
}
