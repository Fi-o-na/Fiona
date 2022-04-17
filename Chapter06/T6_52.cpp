/*
 * FileName: T6_52.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Function template.
 */
#include <iostream>

using namespace std;
int intMinimum(int a, int b)
{
    return a<b?a:b;
}
double doubleMinimum(double c, double d)
{
    return c<d?c:d;
}
char charMinimum(char x, char y)
{
    return x<y?x:y;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout << intMinimum(a, b) << endl;
    double c,d;
    cin>>c>>d;
    cout << doubleMinimum(c, d) << endl;
    char x,y;
    cin>>x>>y;
    cout << charMinimum(x, y) << endl;

    return 0;
}
