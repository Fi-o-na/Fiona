/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Displays the daily cost of driving to the user

 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,s;
    cout <<"Please input the total number of miles you drove today, the price of gas per gallon, the number of review miles per gallon, today's parking rate and today's toll: ";
    cin>>a;cin>>b;cin>>c;cin>>d;cin>>e;
    s=(a/c)*b+c+d;
    cout <<"The cost of your drive today is "<< s <<endl;
    return 0;
}
