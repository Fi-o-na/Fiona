/*
 * FileName: T4_34.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate the factorial of a number.
 */
#include <iostream>

using namespace std;

int main()
{
    int n,i,a;
    cin >>n;
    cout <<"a"<<endl;
    a=1;
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    cout <<a<<endl;
    return 0;
}
