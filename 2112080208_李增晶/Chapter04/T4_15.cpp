/*
 * FileName: T4_15.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate a salesperson's income last week.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b;
    while(1)
    {
    cout <<"Enter sales in dollars: ";
    cin >>a;
    b=200+0.09*a;
    cout << "Salary is: $" << setiosflags(ios::fixed) << setprecision(2) << b <<"\n"<<endl;
    }
    return 0;
}
