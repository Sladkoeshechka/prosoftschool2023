#include "test_runner.h"
#include "tests.h"
#include "first_task.h"

void unittest::first_task_test()
{
    NewA a1(1, 2);
    NewA a2(2, 3);
//    std::cout << (a1 >= a2) << (a1 <= a2) << (a1 == a2) << (a1 != a2) << std::endl;
//    std::cout << (a1 >= 4) << (a1 <= 4) << (a1 == 4) << (a1 != 4) << std::endl;
//    std::cout << (a1 >= 4.0) << (a1 <= 4.0) << (a1 == 4.0) << (a1 != 4.0) << std::endl;

    ASSERT(!(a1 >= a2));
    ASSERT(a1 <= a2);
    ASSERT(a1 >= a1);
    ASSERT(a1 <= a1);
    ASSERT(!(a1 == a2));
    ASSERT(a1 != a2);


}
