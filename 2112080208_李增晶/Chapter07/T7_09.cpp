/*
 * FileName: T7_09.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 23th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Two dimensional array.
 */

#include <iostream>
#include <array>

using namespace std;

int main()
{
    int i,j;
    //a  array<array<int,3>,2>a={1,2,3,4,5,6};
    //g
    array<array<int,3>,2>t={1,2,3,4,5,6};
    t[0][1]=0;
    for(i=0; i<t.size(); i++)
    {
        for(j=0; j<t[i].size(); j++)
        {
            cout<< t[i][j] << " ";
        }
        cout << endl;
    }

    //i
    for(i=0; i<t.size(); i++)
    {
        for(j=0; j<t[i].size(); j++)
        {
            t[i][j]=0;
            cout<< t[i][j] << " ";
        }
        cout << endl;
    }
    //k
    int n;
    for(i=0; i<t.size(); i++)
    {
        for(j=0; j<t[i].size(); j++)
        {
            cin>>n;
            t[i][j]=n;
            cout<< t[i][j] << " ";
        }
        cout << endl;
    }
    //0
    array<array<int,3>,2>a={1,2,3,4,5,6};
    cout << "\t" <<"1\t" << "2\t" << "3" <<endl;
    for(i=0;i<t.size();i++)
    {
        cout<<i+1;
        for(j=0;j<a[i].size();j++)
            {
                cout<< "\t" << a[i][j] ;
            }
            cout << endl;
    }
    //l
    int m;
    m=a[0][0];
    for(i=0;i<t.size();i++)
    {
        for(j=0;j<a[i].size();j++)
            {
                if(a[i][j]<m)
                {
                    m=a[i][j];
                }
                else
                {
                    m=m;
                }
            }
    }
    cout << m <<endl;


    return 0;
}
