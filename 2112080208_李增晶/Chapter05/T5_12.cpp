/*
 * FileName: T5_12.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 25th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print design.
 */
#include <iostream>

using namespace std;

int main()
{

    int a=10,i,j,k;

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    cout <<endl;
    for (i=10;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout <<'*';
        }
        cout <<" ";
        cout<<endl;
    }
    cout <<endl;
    for(j=1; j<=10; j++)
    {
        if(j=1)
        {
            for(i=1; i<=10; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=2)
        {
            cout <<" ";
            for(i=1; i<=9; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=3)
        {
            cout <<"  ";
            for(i=1; i<=8; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=4)
        {
            cout <<"   ";
            for(i=1; i<=7; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=5)
        {
            cout <<"    ";
            for(i=1; i<=6; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=6)
        {
            cout <<"     ";
            for(i=1; i<=5; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=7)
        {
            cout <<"      ";
            for(i=1; i<=4; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=8)
        {
            cout <<"       ";
            for(i=1; i<=3; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=9)
        {
            cout <<"        ";
            for(i=1; i<=2; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=10)
        {
            cout <<"         ";
            for(i=1; i<=1; i++)
            {
                cout <<"*";
            }
            cout <<endl;

        }

    }
    cout <<endl;
    for(j=1; j<=10; j++)
    {
        if(j=1)
        {
            cout <<"         ";
            for(i=1; i<=1; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=2)
        {
            cout <<"        ";
            for(i=1; i<=2; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=3)
        {
            cout <<"       ";
            for(i=1; i<=3; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=4)
        {
            cout <<"      ";
            for(i=1; i<=4; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=5)
        {
            cout <<"     ";
            for(i=1; i<=5; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=6)
        {
            cout <<"    ";
            for(i=1; i<=6; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=7)
        {
            cout <<"   ";
            for(i=1; i<=7; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=8)
        {
            cout <<"  ";
            for(i=1; i<=8; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=9)
        {
            cout <<" ";
            for(i=1; i<=9; i++)
            {
                cout <<"*";
            }
            cout <<endl;
        }
        if(j=10)
        {
            for(i=1; i<=10; i++)
            {
                cout <<"*";
            }
            cout <<endl;

        }

    }
    return 0;
}

