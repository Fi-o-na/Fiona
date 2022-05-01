/*
 * FileName: T8_12.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 30th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Complete the following specified statement in C++
 */

#include <cstdio>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <array>
#include <vector>
#include <cstdlib>
#include <set>
#include <string>
#include <algorithm>
int main()
{
    int v1,v2,d,t,l,h1,h2;
    scanf("%d %d %d %d %d",&v1,&v2,&d,&t,&l);
    int x1=0,x2=0,count=0;
    if(v1 < v2)
        printf("T\n");
    else if(v1 == v2)
        printf("D\n");
    else
    {
        while(x1<l && x2<l)
        {
            while(x1-x2 >= d)
            {
                x2 += v2*t;
                count++;
            }
            x1 += v1;
            x2 += v2;
        }
    }
    if(x1 > x2)
    {
        printf("R\n");
        printf("%d",l/v1+t*count);
    }
    else if(x1 == x2)
    {
        printf("D\n");
        printf("%d",l/v2);
    }
    else
    {
        printf("T\n");
        printf("%d",l/v2);
    }
    return 0;
}



