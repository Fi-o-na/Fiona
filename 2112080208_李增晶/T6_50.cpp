/*
 * FileName: T6_50.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Pass by value and by reference.
 */
#include <iostream>

using namespace std;
//��ֵ����
int tripleByValue(int count, int b)
{
    int temp = count;
    count=b;
    b=3*temp;
    return b;
}
//�����ô���
int tripleByReference(int &count, int &b)
{
    int temp = count;
    count=b;
    b=3*temp;
    return b;
}
int main()
{
    int count=2,b=1;
    cout << "count=2,b=1" <<endl;
    cout << "b=" << tripleByValue(count,b) <<endl;
    cout << "b=" << tripleByReference(count,b) <<endl;
    return 0;
}
