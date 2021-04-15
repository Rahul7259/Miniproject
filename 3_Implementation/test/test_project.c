#include<stdio.h>
#include "header.h"
#include "unity.h"
#include<math.h>
#include<stdlib.h>

calc_arthmetic value;
static result ans={0};
calc_st valuee;
static result_t anss={0};

void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_log(void)
{
    /**
     * @brief requirment based test case.
     * 
     */
     valuee.num_1=8869;
     logg(valuee,&ans);
     TEST_ASSERT_EQUAL(3.95,ans.final_answer);

     /**
      * @brief scenario based test case.
      * 
      */
     valuee.num_1=124;
     logg(valuee,&ans);
     TEST_ASSERT_EQUAL(2.09,ans.final_answer);

}

void test_sqrt(void)
{
    /**
     * @brief requirment based
     * 
     */
    valuee.num_1=24;
    sqrtt(valuee,&ans);
    TEST_ASSERT_EQUAL(4.90,ans.final_answer);
    /**
     * @brief scenario based
     * 
     */
    valuee.num_1=45*32;
    sqrtt(valuee,&ans);
    TEST_ASSERT_EQUAL(37.95,ans.final_answer);
    /**
     * @brief boundary based
     * 
     */
    valuee.num_1=9999;
    sqrtt(valuee,&ans);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
}

void test_power(void)
{
    /**
     * @brief Requirment based
     * 
     */
    value.num_1=5;
    value.num_2=20;
    power(value,&ans);
    TEST_ASSERT_EQUAL(95367433551872,ans.final_answer);

    /**
     * @brief Scenario based
     * 
     */
    value.num_1=2*2;
    value.num_2=4;
    power(value,&ans);
    TEST_ASSERT_EQUAL(256,ans.final_answer);
}

void test_sin(void)
{
    /**
     * @brief requirment based
     * 
     */
    valuee.num_1=10;
    sinn(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
    /**
     * @brief Boundary based
     * 
     */
    valuee.num_1=1000;
    sinn(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
}
void test_cos(void)
{
    /**
     * @brief requirement based
     * 
     */
    valuee.num_1=9;
    coss(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
    /**
     * @brief boundary based
     * 
     */
    valuee.num_1=8888;
    coss(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);

}

void test_tan(void)
{
    /**
     * @brief requirment based
     * 
     */
    valuee.num_1=6;
    tann(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
    /**
     * @brief Boundary based
     * 
     */
    valuee.num_1=5555;
    coss(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);

}

int main()
{
	/**
	 * @brief Construct a new unity begin object
	 * 
	 */
	UNITY_BEGIN();
    RUN_TEST(test_log);
    RUN_TEST(test_sqrt);
    RUN_TEST(test_sin);
    RUN_TEST(test_cos);
    RUN_TEST(test_tan);
	return UNITY_END();
}
