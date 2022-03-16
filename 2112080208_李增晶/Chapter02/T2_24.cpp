/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 11th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Tell wether an integer is odd or even
 */

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Please input an integer : ";
    cin >> a;
    if(a%2==0)
    {
        cout << a <<" is an odd."<<endl;
    }
    else {cout << a << " is an even." <<endl;}
    return 0;
}
