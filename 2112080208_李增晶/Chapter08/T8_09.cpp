/*
 * FileName: T8_09.cpp
 * Author:   Zengjing Li
 * E-mail:   3309726571@qq.com
 * Date:     Apr 30th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Complete the following specified statement in C++
 */

#include <iomanip>
#include <iostream>
int main(int argc, const char *argv[])
{
    long int value1 = 200000;

    long int value2;
    long int *longPtr;
    longPtr = &value1;
    std::cout << *longPtr << std::endl;

    value2 = *longPtr;

    std::cout << value2 << std::endl;
    std::cout << &value1 << std::endl;
    std::cout << &longPtr << std::endl;
    return 0;
}

