/*
 * FileName: T6_32.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Judge grade point.
 */
#include <iostream>

using namespace std;
int qualityPoints(int n)
{
    int m;
    if(n>=90&&n<=100)
    {
        m=4;
    }
    if(n>=80&&n<=89)
    {
        m=3;
    }
    if(n>=70&&n<=79)
    {
        m=2;
    }
    if(n>=60&&n<=69)
    {
        m=1;
    }
    if(n<60)
    {
        m=0;
    }
    return m;
}

int main()
{
    int n;
    cin>>n;
    cout<<qualityPoints(n)<<endl;
    return 0;
}
