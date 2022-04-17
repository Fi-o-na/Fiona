/*
 * FileName: T6_18.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Exponentiation calculation
 */
#include <iostream>

using namespace std;
int integerPower(int base,int exponent)
{
    int i,y=1;
    for(i=1;i<=exponent;i++)
    {
       y*=base;
    }
    return y;
}
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    cout <<integerPower(base,exponent)<< endl;
    return 0;
}
