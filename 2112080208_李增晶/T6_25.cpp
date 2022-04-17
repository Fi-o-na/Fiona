/*
 * FileName: T6_25.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Number of seconds calculate.
 */
#include <iostream>

using namespace std;
int secondsCalculate(int hours, int minutes, int seconds)
{
    int sum=0;
    sum=3600*hours+60*minutes+seconds;

    return sum;
}

int main()
{
    int hours, minutes, seconds;
    cin>>hours>>minutes>>seconds;
    cout << secondsCalculate(hours, minutes, seconds) <<endl;
    return 0;
}
