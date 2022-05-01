/*
 * FileName: T7_28.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 30th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Palindrome
 */
#include <iostream>
#include <cstring>

using namespace std;
int testPalindrome(char a[100])
{
    int c=0;
    int len;
    len=strlen(a);
    for (int i=0;i<len;i++)
    {
        if (len==1)
        {
            c=1;
            break;
        }
        else
        {
            if (a[i]==a[len-i-1])
                c=1;
            else
                c=0;
        }
    }
return c;
}
int main()
{
    char a[100];
    cin >> a;
    int c;
    int testPalindrome (char a[100]);
    cout<< testPalindrome(a[100])<<endl;
    return 0;
}


