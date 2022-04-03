/*
 * FileName: T5_24.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 2th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print design.
 */
#include <iostream>

using namespace std;

int main()
{
    int a,i,j,k;
    cin >>a;
    for(i=1;i<(a+1)/2+1;i++)
    {
        for(j=1;j<=(a+1-2*i)/2;j++)
        {
            cout <<" ";
        }
        for(k=1;k<=2*i-1;k++)
        {
            cout <<"*";
        }cout <<endl;
    }
    for(i=(a-1)/2;i>=1;i--)
    {
        for(j=i;j<=(a-1)/2;j++)
        {
            cout <<" ";
        }
        for(k=1;k<=2*i-1;k++)
        {
            cout <<"*";
        }
        cout <<endl;

    }

    return 0;
}
