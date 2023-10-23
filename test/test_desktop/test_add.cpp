#include <add.hpp>
#include <unity.h>

void setUp(void){}

void tearDown(void){}


void test_add_adds_two_values(void){
    int expected = 4;
    int actual =  add(1,3);
    TEST_ASSERT_EQUAL_INT32(expected, actual);
}

int main(int argc, char **argv){
    UNITY_BEGIN();
    RUN_TEST(test_add_adds_two_values);
    UNITY_END();

    return 0;

}