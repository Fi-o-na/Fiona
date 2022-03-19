/*
 * FileName: T4_16.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate the total salary of an employee last week.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c;
    while(1)
    {
        cout <<"Please enter hours worked: ";
        cin >>a;
        cout <<"Enter hourly rate of the employee ($00.00): ";
        cin >>b;
        if(a<=40)
        {
            c=a*b;
        }
        else
        {
            c=400+(a-40)*15;
        }
        cout << "Salary is $" <<setiosflags(ios::fixed) << setprecision(2) << c <<"\n"<<endl;
    }
    return 0;
}
