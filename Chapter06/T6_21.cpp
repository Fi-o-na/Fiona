/*
 * FileName: T6_21.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: even.
 */
#include <iostream>

using namespace std;
int iseven(int n)
{
    int c;
    c=n/2;
    if(2*c==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int i,n,arr[100];
    for(i=1;i<=10;i++)
    {
        cin>>n;
        arr[i]=n;
        cout << iseven(arr[i]) << endl;
    }

    return 0;
}
