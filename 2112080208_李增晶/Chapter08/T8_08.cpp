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
    const int SIZE = 5;

    unsigned int values[SIZE] = {2, 4, 6, 8, 10};

    unsigned int *vPtr;
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << std::setw(4) << values[i];
    }

    vPtr = values;
    vPtr = &values[0];
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << std::setw(4) << *(vPtr + i);
    }
    std::cout << std::endl;

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << std::setw(4) << *(values + i);
    }
    std::cout << std::endl;

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << std::setw(4) << vPtr[i];
    }
    std::cout << std::endl;

    vPtr = &values[4];
    vPtr -= 4;
    std::cout << *vPtr << std::endl;

    return 0;
}

