/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the maximum and minimum of five intrgers to screen
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,m1,m2;
    cout <<"Please input five integers: ";
    cin >>a>>b>>c>>d>>e;
    if(a==b&&b==c&&c==d&&d==e)
    {
        cout << "These five integers are equal." <<endl;
    }
    if(a>b)
    {
        m1=a;m2=b;
        if(m1>c)
        {
            m1=m1;
            if(c>m2)
            {
                m2=m2;
            }
            else {m2=c;}
            if(m1>d)
            {
                m1=m1;
                if(d>m2)
                {
                    m2=m2;
                }
                else {m2=d;}
                if(m1>e)
                {
                    m1=m1;
                }
                else{m1=e;}
            }
            else {m1=d;}
            if(m1>e)
                {
                    m1=m1;
                }
                else{m1=e;}
        }
        else {m1=c;}
        if(m1>d)
        {
            m1=m1;
            if(d>m2)
            {
                m2=m2;
            }
            else {m2=d;}
            if(m1>e)
            {
                m1=m1;
            }
            else{m1=e;}
        }
            else {m1=d;}
            if(m1>e)
                {
                    m1=m1;
                }
                else{m1=e;}
    }
    else
    {
        m1=b;m2=a;
    if(m1>c)
    {
        m1=m1;
        if(c>m2)
            {
                m2=m2;
            }

        else {m2=c;}
        if(m1>d)
        {
            m1=m1;
            if(d>m2)
            {
                m2=m2;
            }
            else {m2=d;}
            if(m1>e)
            {
                m1=m1;
            }
            else{m1=e;}
        }
        else {m1=d;}
            if(m1>e)
                {
                    m1=m1;
                }
                else{m1=e;}

    }
    else
    {
        m1=c;
        if(m1>d)
        {
            m1=m1;
            if(d>m2)
            {
                m2=m2;
            }
            else {m2=d;}
        }
        else {m1=d;}
        if(m1>e)
        {
            m1=m1;
        }
        else{m1=e;}
        if(m1>e)
        {
            m1=m1;
        }
        else{m1=e;}
    }
    }

    cout << m1 << " is maximum," << m2 << " is minimum." <<endl;
    return 0;
}




















