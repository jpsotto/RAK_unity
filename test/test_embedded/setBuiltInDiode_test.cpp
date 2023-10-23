#include <unity.h>
#include <Arduino.h>
#include <SX126x-RAK4630.h>
#include <setBuiltInDiode.hpp>

void test_setBuiltInDiode_sets_built_in_diode_voltage_to_HIGH_if_HIGH_value_has_been_passed(void){
    setBuiltInDiode(HIGH);

    TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_BUILTIN));
}

void setup(){
    Serial.begin(115200);
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(test_setBuiltInDiode_sets_built_in_diode_voltage_to_HIGH_if_HIGH_value_has_been_passed);
    UNITY_END();
}

void loop(){}
