/*
 * FileName: T4_26.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Determine whether a five digit integer is a palindrome number.
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin >>a;
    b=a/10000;
    c=(a-b*10000)/1000;
    d=a%10;
    e=a%100;
    f=e/10;
    if(b==d&&c==f)
    {
        cout <<"a是回文数"<<endl;
    }
    else
    cout << "a不是回文数" << endl;
    return 0;
}
