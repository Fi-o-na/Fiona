/*
 * FileName: main.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: BMI(Body mass Index) is calculated by the user's height (in pounds or kilograms) and weight (in feet or meters)
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,BMI;
    cout << "Please input yourself height and weight (in meters and kilograms):";
    cin >>a>>b;
    BMI=b/(a*a);
    if(BMI<18.5)
    {
       cout <<"Your BMI "<<"Underweight."<<endl;
    }
    if(BMI>=18.5&&BMI<=24.9)
    {
       cout <<"Your BMI "<<"Normal."<<endl;
    }
    if(BMI>=25&&BMI<=29.9)
    {
       cout <<"Your BMI "<<"Overweight."<<endl;
    }
    if(BMI>30)
    {
       cout <<"Your BMI "<<"Obese."<<endl;
    }
    return 0;
}
