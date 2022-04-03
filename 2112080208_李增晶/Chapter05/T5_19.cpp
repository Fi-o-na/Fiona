/*
 * FileName: T5_19.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 1th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Seek Value of ¦°.
 */
#include <iostream>

using namespace std;

int main()
{
    int i,j,pi;
    pi=0;
    for(i=1;i<=1000;i+4)
    {
        pi=pi+4/i;
        cout << pi <<endl;
        for(j=i+2;j<=i+2;j+2)
        {
            pi=pi-(4/j);
            cout << pi <<endl;
        }
    }

    return 0;
}
