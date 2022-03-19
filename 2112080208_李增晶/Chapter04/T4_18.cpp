/*
 * FileName: T4_18.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Output table.
 */
#include <iostream>

using namespace std;

int main()
{
    int N;
    N=1;
    cout <<"N       "<<"10*N    "<<"100*N   "<<"1000*N"<<endl;
    while(N<=5)
    {
       cout << N <<"\t"<< 10*N <<"\t"<< 100*N <<"\t"<< 1000*N <<endl;
       N++;
    }
    return 0;
}
