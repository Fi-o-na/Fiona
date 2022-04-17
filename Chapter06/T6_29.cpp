/*
 * FileName: T6_29.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Find the prime number.
 */
//a:判断一个数是不是素数
#include<iostream>

using namespace std;
int isprime(int n)
{
    int j,no,yes;
    for (j=2; j<n; j++)
    {
        if (n%j == 0)
        {
            cout << n << "不是素数" <<endl;
            break;
        }
    }
    if(j>=n)
    {
        cout << n << "是素数" <<endl;
    }
    return n;
}
//b:2-10000素数
int oneIsprime()
{
    int i,j,k;
    for (i=2; i<=10000; i++)
    {
        for (j=2; j<i; j++)
        {
            if (i%j == 0)
                break;
        }
        if (j>=i)
        {
            cout << i << " ";
        }
    }

}
int main()
{
    cout << "a:判断一个数是不是素数";
    int n;
    cin>>n;
    isprime(n);
    cout << "b:打印2-10000的素数" <<endl;
    oneIsprime();
    return 0;
}

