/*
 * FileName: T7_15.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 29th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Two-dimensional array object initialization
 */
#include <iostream>
#include <array>
using namespace std;
int main ()
{
    array< array <int ,5> ,3> sales={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    for (size_t row=0;row<sales.size();++row)
    {
        for(size_t column=0;column< sales[row].size();++column)
        {
            sales[row][column]=0;
            cout << sales[row][column] << " ";
        }
        cout << endl;
    }
    return 0;
}
