/*
 * FileName: T5_22.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 2th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: De Morgan's law.
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y,i,j,g;
    a=1;b=2;x=5;y=7;g=5;
    if((x>=5)&&(y>=7))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;
    if(!(x<5)&&(y>=7))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;
    if((a!=b)&&(g==5))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;
    if(!(a==b)||!(g!=5))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;
    x=9;y=5;i=4;j=5;
    if((x>8)&&(y>4))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;
    if(!((x<=8)&&!(y>4)))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;
    if((i<=4)||(j<=6))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;
    if(!((i>4)||!(j<=6)))
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;

    return 0;
}
