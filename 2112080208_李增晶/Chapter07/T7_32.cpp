/*
 * FileName: T7_32.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 30th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: A recursive minimum function that finds the smallest value in a set of numbers
 */

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int recursiveMinimum(array<int,9999>a,int x,int y)
{
    if(x+1 == y)
        return min(a[x],a[y]);
    else
        return min(a[x],recursiveMinimum(a,x + 1,y));
}

int main()
{
    //记录输入的一组数据
    array<int,9999>a;
    int i,n;
    for( i = 0; 1; i++)
    {
        cin >> n;
        if(n == -1)
            break;
        a[i] = n;
    }

    cout << recursiveMinimum(a,0,i-1);
    return 0;
}
