/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the diameter,  circumference and area of of a circle to screen
 */

#include <iostream>

using namespace std;

int main()
{
    int r,d,c,s,pi;
    cin >>r;
    pi=3.14159;
    cout << "The diameter of a circle is:" << 2*r <<endl;
    cout << "The circumference of a circle is:" << 2*pi*r <<endl;
    cout << "The area of a circle is" << pi*r*r <<endl;
    return 0;
}
