/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Use tabs to print integers between 0 and 10 in a neat format as shown
integer square  cube
0       0       0
1       1       1
2       4       8
3       9       27
4       16      64
5       25      125
6       36      216
7       49      343
8       64      521
9       81      729
10      100     1000

 */
#include <iostream>

using namespace std;

int main()
{
    int i,j;
    j=10;
    cout <<"integer "<<"square  "<<"cube"<<endl;
    for(i=0;i<=j;i++)
    {
        cout << i <<"\t"<< i*i <<"\t"<<i*i*i<<endl;
    }
    return 0;
}
