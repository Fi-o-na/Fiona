/*
 * FileName: T5_20.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 2th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Pythagorean triples
 */
#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for(i=3;i<=500;i++)
    {
        for(j=4;j<=500;j++)
        {
            for(k=4;k<=500;k++)
            {
                if(i*i+j*j==k*k||i*i+k*k==j*j||j*j+k*k==i*i)
                {
                    for(a=1;a<=5;a++)
                    {
                        cout << "(" << i << "," << j << "," << k << ")";
                    }cout <<endl;
                }
            }
        }
    }
    return 0;
}
