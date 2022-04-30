/*
 * FileName: T7_11.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 23th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Salary range of salesperson.
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    //a
    array<int,10>counts={0};
    for(int x:counts)
    {
        cout << x <<" ";
    }
    cout << endl;
    //b
    array<int,15>bonus={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    for(int y:bonus)
    {
        cout << y+1 <<" ";
    }
    cout << endl;
    //c
    int i;
    double w,z;
    array<double,12>monthlyTemperatures={};
    for(i=0;i<=11;i++)
    {
        cin>>w;
        monthlyTemperatures[i]=w;
    }
    for(double z:monthlyTemperatures)
    {
        cout << z << " ";
    }
    cout <<endl;
    //d
    array<int,5>bestScores={1,2,3,4,5};
    for(int s:bestScores)
    {
        cout<<s<<endl;
    }
    return 0;
}
