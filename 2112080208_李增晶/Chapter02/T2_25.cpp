/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 11th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Determines whether the first intrger is a multiple of the second integer
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"Please input two integers : "<<endl;
    cin >> a >> b;
    if(a%b==0)
    {
        cout << "The first intrger is a multiple of the second integer." <<endl;
    }
    else
    {
        cout << "The first intrger is not a multiple of the second integer." << endl;
    }
    return 0;
}
