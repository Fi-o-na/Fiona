/*
 * FileName: T4_25.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print out a square with any side length with asterisk and space.
 */
#include <iostream>

using namespace std;

int main()
{
    int a,i,j;
    cin >>a;
    if(a<=20)
    {
        for(i=1;i<=a;i++)
        {
            cout<<"*";
        }
        cout <<endl;
        for(i=1;i<=(a-2);i++)
        {
           cout<<"*";
            for(j=1;j<=(a-2);j++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        for(i=1;i<=a;i++)
        {
            cout<<"*";
        }
    }
    return 0;
}

