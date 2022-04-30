/*
 * FileName: T7_14.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 29th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: One dimensional array de duplication.
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> a(0);
    int i,n;
    for(i=1;i<=20;i++)
    {
        cin>>n;
        if(n>=10&&n<=100)
        {
            if(0==a.size())
            {
                a.push_back(n);
            }
            else
            {
                a.push_back(n);
                for(size_t j=0; j<a.size()-1; j++)
                {
                    if(a[j]==n)
                    {
                        a.pop_back();
                        break;
                    }
                }
            }

        }
    }
    for(size_t i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
