#include "test_runner.h"
#include "tests.h"
#include "../first_task.h"
#include "../second_task.h"

void unittest::first_task_test()
{
    NewA a1(1, 2);
    NewA a2(2, 3);

    //comparing to NewA
    ASSERT(a1 <= a1);
    ASSERT(a1 <= a2);

    ASSERT(!(a1 >= a2));
    ASSERT(a1 >= a1);
    ASSERT(a1 >= NewA(-3, 5));

    ASSERT(!(a1 == a2));
    ASSERT(a1 == NewA(-3, 5));
    ASSERT(a1 == NewA(1 ,2));

    ASSERT(a1 != a2);


    //comparing to int
    ASSERT(!(a1 >= 4));
    ASSERT(a1 >= 0);

    ASSERT(a1 <= 4);
    ASSERT(a1 <= 1);

    ASSERT(!(a1 == 4));
    ASSERT(a1 == 1);

    ASSERT(a1 != 4);
    ASSERT(!(a1 != 1));


    //comparing to double
    ASSERT(!(a1 >= 4.0));
    ASSERT(a1 >= 0.0);
    ASSERT(a1 >= 0.5);

    ASSERT(a1 <= 4.0);
    ASSERT(a1 <= 1.0);
    ASSERT(a1 <= 1.5);

    ASSERT(!(a1 == 4.0));
    ASSERT(a1 == 1.0);
    ASSERT(a2 == 2.0);
    ASSERT(NewA(0, 10) == 0.0);
    ASSERT(NewA(-2,10) == -2.0);

    ASSERT(a1 != 4.0);
    ASSERT(!(a1 != 1.0));
}

void unittest::second_task_test()
{
        A a1(3, 5);
        A a2(1, 2);
        std::cout << (a1 > a2) << (a1 < a2) << std::endl;
        std::cout << (a1 > 4) << (a1 < 4) << (a2 > 10) << (a2 < 10) << std::endl;
        std::cout << (a1 >= a2) << (a1 <= a2) << (a1 == a2) << (a1 != a2) << std::endl;
        std::cout << (a1 >= 3) << (a1 <= 3) << (a1 == 3) << (a1 != 3) << std::endl;

        B b1(1 ,2);
        std::cout << (a1 > b1) << (a1 < b1) << std::endl;
        std::cout << (a1 >= b1) << (a1 <= b1) << (a1 == b1) << (a1 != b1) << std::endl;


}
