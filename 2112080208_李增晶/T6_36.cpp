/*
 * FileName: T6_36.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Judge grade point.
 */
#include <iostream>
#include <cmath>
using namespace std;
int power(int base, int exponent)
{
    int sum;
    sum=pow(base,exponent);
    return sum;
}
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    cout << power(base,exponent) << endl;
    return 0;
}
