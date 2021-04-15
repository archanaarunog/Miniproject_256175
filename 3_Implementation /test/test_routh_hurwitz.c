
#include "function.h"
#include "unity.h"
#define PROJ_NAME "Routh_hurwitz"
void test_case1(void);
void setUp(){}
void tearDown(){}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_case1);
    return UNITY_END();
}
void test_case1(void)
{
    double char_eqn[3];
    charact_eqn(3,char_eqn);
    TEST_ASSERT_EQUAL(0,initialize_routh_array(2,3,));
}

