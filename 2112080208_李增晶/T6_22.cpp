/*
 * FileName: T6_22.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print design.
 */
#include <iostream>

using namespace std;
int asteriskSquare(int side)
{
    int i,j;
    for(i=1;i<=side;i++)
        {
            cout <<"*";
            for(j=1;j<side;j++)
            {
                cout <<"*";
            }cout <<endl;
        }
}
int main()
{
    int side;
    cin>>side;
    cout << asteriskSquare(side) << endl;
    return 0;
}
