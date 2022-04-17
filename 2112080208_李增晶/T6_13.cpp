/*
 * FileName: T6_13.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 数的整数舍入。
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double i,x;
    int y;
    for(i=1;i<=5;i++)
    {
        cin>>x;
        y=floor(x+0.5);
        cout << (double)x << "," << y <<endl;
    }


    return 0;
}
