#include <iostream>
#include "first_task.h"
#include "second_task.h"

void first_task_test()
{
    NewA a1(1, 2);
    NewA a2(2, 3);
    std::cout << (a1 >= a2) << (a1 <= a2) << (a1 == a2) << (a1 != a2) << std::endl;
    std::cout << (a1 >= 4) << (a1 <= 4) << (a1 == 4) << (a1 != 4) << std::endl;
    std::cout << (a1 >= 4.0) << (a1 <= 4.0) << (a1 == 4.0) << (a1 != 4.0) << std::endl;
}

void second_task_test()
{
    A fisrt(3, 5);
    A second(1, 2);
}

int main()
{
    first_task_test();
    second_task_test();
}
