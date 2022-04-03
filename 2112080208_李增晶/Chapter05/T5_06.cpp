/*
 * FileName: T5_06.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 2th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the average of integers.
 */
#include <iostream>

using namespace std;

int main()
{
    int a,i,sum,average;
    cin>>a;
    sum=0;
    i=0;
    for (;a!=9999;)
    {
        i++;
        cin>>a;
        sum+=a;
    }
    average=(sum-9999)/i;
    cout << average <<endl;
    return 0;
}
