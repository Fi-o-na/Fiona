/*
 * FileName: T6_20.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Multiple.
 */
#include <iostream>

using namespace std;
int multiple(int a, int b)
{
    int c;
    c=b/a;
    if(b==a*c)
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
    int a,b;
    cin>>a>>b;
    cout<< multiple(a, b) <<endl;
    return 0;
}
