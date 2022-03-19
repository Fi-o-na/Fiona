/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 18th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate the user's new balance for the month and determine whether the new balance exceeds the user's credit limit.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    double b,c,d,e,N;
    while(1)
    {
    cout << "Please enter account number: ";
    cin >> a;
    cout << "Please enter beginning balance: ";
    cin >> b;
    cout << "Please enter total charges: ";
    cin >> c;
    cout << "Please enter total credits: ";
    cin >> d;
    cout << "Please enter Credit limit: ";
    cin >> e;
    N=b+c-d;
        if(N>e)
        {
            cout << "New balance is " <<N<<endl;
            cout << "account number£º" <<a<<endl;
            cout << "Credit limit£º" <<setiosflags(ios::fixed)<<setprecision(2)<<e<<endl;
            cout << "Balance " <<N<<endl;
            cout << "Credit Limit Exceeded.\n" <<endl;
        }
        else
        {
            cout << "New balance is " <<N<<endl;
        }
    }

    return 0;
}
