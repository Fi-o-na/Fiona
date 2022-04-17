/*
 * FileName: T6_11.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print corresponding x to screen.
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    x=fabs( 7.5 );
    cout << "fabs( 7.5 )" << "=" << x <<endl;
    x=floor( 7.5 );
    cout << "floor( 7.5 )" << "=" << x <<endl;
    x=fabs( 0.0 );
    cout << "fabs( 0.0 )" << "=" << x <<endl;
    x=ceil( 0.0 );
    cout << "ceil(  )" << "=" << x <<endl;
    x=fabs( -6.4 );
    cout << "fabs( -6.4 )" << "=" << x <<endl;
    x=ceil( -6.4);
    cout << "ceil( -6.4 )" << "=" << x <<endl;
    x=ceil( -fabs( -8+floor( -5.5 ) ) );
    cout << "ceil( -fabs( -8+floor( -5.5 ) ) )" << "=" << x <<endl;

    return 0;
}
