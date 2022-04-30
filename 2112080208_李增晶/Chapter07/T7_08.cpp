/*
 * FileName: T7_08.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 23th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Function .
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    int c,i;
    //a
    cout<< "a" <<endl;
    array<int,10>alphabet={1,2,3,4,5,6,7,8,9,10};
    cout<<alphabet[6]<<endl;
    //b
    cout<< "b" <<endl;
    array<double,9>grades={1,2,3,4,5,6,7,8,9};
    cin >>c;
    grades[4]=c;
    for(i=0;i<9;i++)
        cout<<grades[i]<<" ";

    cout <<endl;
    //c
    cout<< "c" <<endl;

    array<int,4>value={};
    for(i=0;i<=4;i++)
    {
        value[i]=8;
        cout<<value[i]<<" ";
    }
    cout<<endl;
    //d
    cout<< "d" <<endl;
    double x,sum=0;
    array<double,4>temperatures={};
    for(i=0;i<=4;i++)
    {
        cin>>x;
        temperatures[i]=x;
        sum+=temperatures[i];
    }
    cout << sum <<endl;
    //e
    cout<< "e" <<endl;
    array<double,11>a={-1,-2,-3,-4,-5,-6,-7,-8,-9,-1,-2,};
    array<double,34>b={1,2,3,4,5,6,7,8,9,1,2,};
    for(i=0;i<=10;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<=33;i++)
    {
        cout << b[i] << " " ;
    }
    cout <<endl;
    //f
    cout<< "f" <<endl;
    int m,n;
    array<double,5>w={1,0,-2,2,9};
    m=w[0];
    for(i=1;i<=4;i++)
    {
        if(m>w[i])
        {
            m=m;
        }
        else
        {
            m=w[i];
        }
    }
    cout << "最大值："<< m <<endl;
    n=w[0];
    for(i=1;i<=4;i++)
    {
        if(n<w[i])
        {
            n=n;
        }
        else
        {
            n=w[i];
        }
    }
    cout << "最小值："<< n <<endl;
    return 0;
}
