/*
 * FileName: T7_30.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 30th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Use functions to print out array objects in order
 */
#include <iostream>
#include <array>
using namespace std;

void printArray(array<int,10>a,int x,int y)
{
	if(x == y)
	cout << a[y];
	else
    {
    	cout << a[x] << " ";
    	return printArray(a,x+1,y);
	}
}

int main()
{
	array<int,10>a={0,1,2,3,4,5,6,7,8,9};
	int x = 0;
	int y = a.size()-1;
	cout<<printArray(a,x,y)<<endl;
	return 0;
 }
