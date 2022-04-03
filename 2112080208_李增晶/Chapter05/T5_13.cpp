/*
 * FileName: T5_13.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 25th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print design.
 */
#include <iostream>

using namespace std;

int main()
{
    int a=5,i,j,k;
    for (i=1;i<=a;i++)
    {
        cin >>k;
        if(k>=1&&k<=30)
        {
            for(j=1; j<=k; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}
