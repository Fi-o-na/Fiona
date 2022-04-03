/*
 * FileName: T5_09.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 25th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the odd product between 1-15 on the screen.
 */
#include <iostream>

using namespace std;

int main()
{
    int i,j;
    j=1;
    for (i=1;i<=15;i=i+2)
    {
        j=j*i;
    }
    cout << j <<endl;
    return 0;
}
