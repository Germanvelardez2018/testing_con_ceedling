#include <string.h>
#include "fff.h"
#include "mock_comm.h"

DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_init);
DEFINE_FAKE_VOID_FUNC0(comm_deinit);
DEFINE_FAKE_VOID_FUNC0(comm_reset);
DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_check);
DEFINE_FAKE_VOID_FUNC0(comm_sleep);
DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_version);
DEFINE_FAKE_VOID_FUNC0(comm_resume);
DEFINE_FAKE_VALUE_FUNC1(uint32_t, comm_config_irq, uint8_t);
DEFINE_FAKE_VOID_FUNC2(comm_send_mesage, char*, char*);
DEFINE_FAKE_VALUE_FUNC0(uint8_t*, comm_get_buffer);
DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_get_signal);
DEFINE_FAKE_VALUE_FUNC1(uint32_t, comm_set_echo, uint8_t);
DEFINE_FAKE_VALUE_FUNC1(uint32_t, comm_set_pwr_gps, uint32_t);
DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_get_gps_info);
DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_get_operator);
DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_get_apn);
DEFINE_FAKE_VALUE_FUNC0(uint32_t, comm_open_apn);
DEFINE_FAKE_VALUE_FUNC4(uint32_t, comm_config_mqtt, uint8_t*, uint8_t*, uint8_t*, uint8_t*);
DEFINE_FAKE_VALUE_FUNC3(uint32_t, comm_mqtt_publish, char*, char*, uint8_t);

void mock_comm_Init(void)
{
    FFF_RESET_HISTORY();
    RESET_FAKE(comm_init)
    RESET_FAKE(comm_deinit)
    RESET_FAKE(comm_reset)
    RESET_FAKE(comm_check)
    RESET_FAKE(comm_sleep)
    RESET_FAKE(comm_version)
    RESET_FAKE(comm_resume)
    RESET_FAKE(comm_config_irq)
    RESET_FAKE(comm_send_mesage)
    RESET_FAKE(comm_get_buffer)
    RESET_FAKE(comm_get_signal)
    RESET_FAKE(comm_set_echo)
    RESET_FAKE(comm_set_pwr_gps)
    RESET_FAKE(comm_get_gps_info)
    RESET_FAKE(comm_get_operator)
    RESET_FAKE(comm_get_apn)
    RESET_FAKE(comm_open_apn)
    RESET_FAKE(comm_config_mqtt)
    RESET_FAKE(comm_mqtt_publish)
}
void mock_comm_Verify(void)
{
}
void mock_comm_Destroy(void)
{
}
