/*
 * FileName: T5_08.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 2th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Find the mininum integer.
 */
 #include <iostream>

using namespace std;

int main()
{
    int i,a,b,d;
    cin>>a;
    d=a;
    for(i=1;i<=a;i++)
    {
        cin>>b;
        if(d>b)
        {
            d=b;
        }
        else
        {
            d=d;
        }
    }
    cout<<d<<endl;
    return 0;
}
