/*
 * FileName: T6_23.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print design.
 */
#include <iostream>

using namespace std;
int fillCharacter(char a ,int side)
{
    int i,j;
    for(i=1;i<=side;i++)
        {
            cout <<a;
            for(j=1;j<side;j++)
            {
                cout <<a;
            }cout <<endl;
        }
}
int main()
{
    int side;
    char a;
    cin>>a>>side;
    cout << fillCharacter(a , side) << endl;
    return 0;
}
