#include <iostream>

#include "test/test_runner.h"
#include "test/tests.h"

int main()
{
    TestRunner tr;
    RUN_TEST(tr, unittest::first_task_test);
}
