/*
 * FileName: T4_24.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Practice using indentation techniques.s
 */
#include <iostream>

using namespace std;

int main()
{
    cout <<"a.x=5,y=8"<<endl;
    int x,y;
    cin >>x>>y;
    if(y==8)
    {
       if(x==5)
       {
           cout <<"@@@@@"<<endl;
       }
       else
       {
           cout <<"#####"<<endl;
       }
    cout <<"$$$$$"<<endl;
    cout <<"&&&&&"<<endl;
    }
    cout <<"\nb.x=5,y=8"<<endl;
    if(y==8)
    {
       if(x==5)
       {
           cout <<"@@@@@"<<endl;
       }
    }
    else
    {
    cout <<"#####"<<endl;
    cout <<"$$$$$"<<endl;
    cout <<"&&&&&"<<endl;
    }
    cout <<"\nc.x=5,y=8"<<endl;
    if(y==8)
    {
       if(x==5)
       {
           cout <<"@@@@@"<<endl;
       }
       else
       {
           cout <<"#####"<<endl;
           cout <<"$$$$$"<<endl;
       }
    cout <<"&&&&&"<<endl;
    }
    y=7;
    cout <<"\nd.x=5,y=7"<<endl;
    if(y==8)
    {
       if(x==5)
       {
           cout <<"@@@@@"<<endl;
       }
    }
    else
    {
        cout <<"#####"<<endl;
        cout <<"$$$$$"<<endl;
        cout <<"&&&&&"<<endl;
    }

    return 0;
}
