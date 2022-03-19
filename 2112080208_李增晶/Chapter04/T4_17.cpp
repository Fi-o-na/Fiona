/*
 * FileName: T4_17.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Output the largest number of 10.
 */
#include <iostream>

using namespace std;

int main()
{
    int number;
    int largest=0;
    int counter=1;
    while (counter <=10)
    {
        cin >>number;
        if (number > largest)
            largest=number;
        else
            largest=largest;
        counter++;
    }
    cout << largest <<endl;
    return 0;
}
