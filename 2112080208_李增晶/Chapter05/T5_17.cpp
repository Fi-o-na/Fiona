/*
 * FileName: T5_17.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 1th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int i,j,k,m;
    i=1;j=2;k=3;m=2;
    cout << (i==1) << endl;
    cout << (j==1) << endl;
    cout << (i>=1&&j<4) << endl;
    cout << (m<=99&&k<m) << endl;
    cout << (j>=1||k==m) << endl;
    cout << (k+m<j||3-j>=k) << endl;
    cout << (!m) << endl;
    cout << (!(j-m)) << endl;
    cout << (!(k>m)) << endl;
    return 0;
}
