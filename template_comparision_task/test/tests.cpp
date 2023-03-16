#include "test_runner.h"
#include "tests.h"
#include "../first_task.h"
#include "../second_task.h"
#include "../hasoperators.h"

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
    ASSERT(a1 <= 4);
    ASSERT(a1 <= 1);

    ASSERT(!(a1 >= 4));
    ASSERT(a1 >= 0);

    ASSERT(!(a1 == 4));
    ASSERT(a1 == 1);

    ASSERT(a1 != 4);
    ASSERT(!(a1 != 1));


    //comparing to double
    ASSERT(a1 <= 4.0);
    ASSERT(a1 <= 1.0);
    ASSERT(a1 <= 1.5);

    ASSERT(!(a1 >= 4.0));
    ASSERT(a1 >= 0.0);
    ASSERT(a1 >= 0.5);

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
    A a1(1, 2);
    A a2(2, 3);

    //compare to A
    ASSERT(a1 <= a1);
    ASSERT(a1 <= a2);

    ASSERT(!(a1 >= a2));
    ASSERT(a1 >= a1);
    ASSERT(a1 >= A(-3, 5));

    ASSERT(!(a1 == a2));
    ASSERT(a1 == A(-3, 5));
    ASSERT(a1 == A(1 ,2));

    ASSERT(a1 != a2);

    //comparing to B
    ASSERT(a1 <= B(-1, 30));
    ASSERT(a1 <= B(10, 10));

    ASSERT(a1 >= B(-1, 30));
    ASSERT(a1 >= B(-10, -10));

    ASSERT(a1 == B(-10, 10));
    ASSERT(a1 == B(1, 2));

    ASSERT(a1 != B(-10 ,-10));
    ASSERT(a1 != B(100, 100));


    //comparing to long int
    ASSERT(a1 <= 10L);
    ASSERT(a1 <= 1L);

    ASSERT(a1 >= -1L);
    ASSERT(a1 >= 1L);

    ASSERT(a1 == 1L);

    ASSERT(a1 != -5L);
    ASSERT(a1 != 10L);

    //check for overrides for certain types
    ASSERT((HasLessT<A, A>::value));
    ASSERT((HasLessT<A, B>::value));
    ASSERT((HasLessT<A, int>::value));
    ASSERT((HasLessT<A, uint64_t>::value));
    ASSERT(!(HasLessT<A, double>::value));
    ASSERT(!(HasLessT<A, float>::value));
    ASSERT(!(HasLessT<A, std::string>::value));
}
