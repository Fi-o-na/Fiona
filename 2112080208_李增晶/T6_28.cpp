/*
 * FileName: T6_28.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Find perfect number3.
 */
#include <iostream>

using namespace std;

int main()
{
    int sum,i,j;
    for(i=2; i<=1000; i++)
    {
        sum = 0;
        for(int j=1; j*j<=i; j++)
        {
            if(i%j == 0)
            {
                if(j*j == i)
                {
                    sum += j;
                }
                else
                {
                    sum += j==1? j : (j+i/j);
                }
            }
        }
        if(sum == i)
        {
            cout << i <<" ";
        }
    }
  return 0;
}

