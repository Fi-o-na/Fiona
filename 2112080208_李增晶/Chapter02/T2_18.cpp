/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   309726571@qq.com
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Compare the sizes of two integers
 */

 #include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"Please input two integers: ";
    cin >>a>>b;
    if(a>b)
    {
       cout<<"These  number  are  epual."<<endl;
    }
    if(b>a)
    {
       cout << b << " is large."<<endl;
    }
    else
    {
       cout<<"These  number  are  epual."<<endl;
    }

    return 0;
}
