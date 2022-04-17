/*
 * FileName: T6_30.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Reverse order.
 */
#include <iostream>

using namespace std;
int reverseOrder(int n)
{
    int i=0,a,b,c,d,e,f,g,h,l,m,sum=0,z;
    z=n;
    while(n!=0)
    {
        n%10;
        n/=10;
        i++;
    }
    n=z;
    if(1==i)
    {
        sum=n;
    }
    if(2==i)
    {
        a=n%10;
        b=n/10;
        sum=10*a+b;
    }
    if(3==i)
    {
        a=n%10;n=n/10;
        b=n%10;
        c=n/10;
        sum=a*100+b*10+c;

    }
    if(4==i)
    {
        a=n%10;n/=10;
        b=n%10;n/=10;
        c=n%10;
        d=n/10;
        sum=a*1000+b*100+c*10+d;
    }
    if(5==i)
    {
        a=n%10;n/=10;
        b=n%10;n/=10;
        c=n%10;n/=10;
        d=n%10;
        e=n/10;
        sum=a*10000+b*1000+c*100+d*10+e;
    }
    if(6==i)
    {
        a=n%10;n/=10;
        b=n%10;n/=10;
        c=n%10;n/=10;
        d=n%10;n/=10;
        e=n%10;
        f=n/10;
        sum=a*100000+b*10000+c*1000+d*100+e*10+f;
    }
    if(7==i)
    {
        a=n%10;n/=10;
        b=n%10;n/=10;
        c=n%10;n/=10;
        d=n%10;n/=10;
        e=n%10;n/=10;
        f=n%10;
        g=n/10;
        sum=a*1000000+b*100000+c*10000+d*1000+e*100+f*10+g;
    }
    if(8==i)
    {
        a=n%10;n/=10;
        b=n%10;n/=10;
        c=n%10;n/=10;
        d=n%10;n/=10;
        e=n%10;n/=10;
        f=n%10;n/=10;
        g=n%10;
        h=n/10;
        sum=a*10000000+b*1000000+c*100000+d*10000+e*1000+f*100+g*10+h;
    }
    if(9==i)
    {
        a=n%10;n/=10;
        b=n%10;n/=10;
        c=n%10;n/=10;
        d=n%10;n/=10;
        e=n%10;n/=10;
        f=n%10;n/=10;
        g=n%10;n/=10;
        h=n%10;
        l=n/10;
        sum=a*100000000+b*10000000+c*1000000+d*100000+e*10000+f*1000+g*100+h*10+l;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout <<reverseOrder(n)<<endl;
    return 0;
}
