/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print each digit of a five-digit integer on the screen, separated by three Spaces

 */
#include <iostream>

using namespace std;

int main()
{
    int i,a,b,c,d,e;
    cout << "Please input a five-digit integer: ";
    cin >> i;
    a=i/10000;
    b=(i-a*10000)/1000;
    c=(i-(a*10000)-(b*1000))/100;
    d=(i-(a*10000)-(b*1000)-(c*100))/10;
    e=i-(a*10000)-(b*1000)-(c*100)-(d*10);
    cout << a <<"   "<< b <<"   "<< c <<"   "<< d <<"   "<<e<<endl;
    return 0;
}
