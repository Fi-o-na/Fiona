/*
 * FileName: T6_16.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 17th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Random number.
 */
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    n=1+rand()%2;
    cout<<n<<endl;
    n=1+rand()%100;
    cout<<n<<endl;
    n=0+rand()%9;
    cout<<n<<endl;
    n=1000+rand()%1112;
    cout<<n<<endl;
    n=-1+rand()%1;
    cout<<n<<endl;
    n=-3+rand()%11;
    cout<<n<<endl;
    return 0;
}
