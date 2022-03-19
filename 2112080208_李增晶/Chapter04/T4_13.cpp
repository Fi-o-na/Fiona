/*
 * FileName: T4_13.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Output miles per gallon and miles per gallon up to this trip.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double miles,gallons;
    double MPG,average;
    cin >>miles >>gallons;
    double total=0;
    double all=0;
    while (miles!=-1)
    {
        MPG=miles / gallons;
        total+=miles;
        all+=gallons;
        average= total / all;
        cout <<"MPG this trip : "<< setiosflags(ios::fixed) << setprecision(6) << MPG <<endl;
        cout <<"Total MPG : "<< setiosflags(ios::fixed) << setprecision(6) << total <<endl;
        cin >>miles>>gallons;
    }
    return 0;
}

