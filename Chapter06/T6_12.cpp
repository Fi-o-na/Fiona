/*
 * FileName: T6_12.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print corresponding x to screen.
 */
#include <iostream>

using namespace std;
double calculateCharges(double c)
{
    double Charge;
    if(c<=3)
    {
        Charge=2.00;
    }
    if(c>3&&c<24)
    {
        int a;
        double b;
        a=(c-3)/1;
        b=(c-3)/1.00;
        if(1.00*a==b)
        {
            Charge=2.00+0.50*b;
        }
        else
        {
            Charge=1.00*(c+1)*0.50;
        }
    }
    if(c==24)
    {
       Charge=10;
    }

    return Charge;
}

int main()
{
    int i,TOTAL;
    double c,m=0,n=0;
    cout << "Car     " << "Hours   " << "Charge" <<endl;
    for(i=1;i<=4;i++)
    {
        cin>>c;
        m+=c;
        if(4==i)
        {
            TOTAL=i;
            c=m;
            n=calculateCharges(c);
        }

        cout <<i<<"\t"<<(float)c<<"\t"<<(double)calculateCharges(c)<<"\t"<<endl;
        n+=calculateCharges(c);
    }




return 0;}

