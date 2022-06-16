/**
 * @file test_comm_services.c
 * @author your name (you@domain.com)
 * @brief  Test Unitario del modulo comm_services (servicios de comunicacion)
 * @version 0.1
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "unity.h"
#include "mock_comm.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_comm_init(){}




 // Probar que se option la respuesta deseada
void test_comm_version(void){
    uint32_t ret =0;
    //comm_version_ExpectAndReturn(1);
    TEST_ASSERT_EQUAL(1,ret);

    

}
