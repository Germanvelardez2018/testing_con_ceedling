#ifndef mock_comm_H
#define mock_comm_H

#include "fff.h"
#include "fff_unity_helper.h"
#include "comm.h"


DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_init);
DECLARE_FAKE_VOID_FUNC0(comm_deinit);
DECLARE_FAKE_VOID_FUNC0(comm_reset);
DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_check);
DECLARE_FAKE_VOID_FUNC0(comm_sleep);
DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_version);
DECLARE_FAKE_VOID_FUNC0(comm_resume);
DECLARE_FAKE_VALUE_FUNC1(uint32_t, comm_config_irq, uint8_t);
DECLARE_FAKE_VOID_FUNC2(comm_send_mesage, char*, char*);
DECLARE_FAKE_VALUE_FUNC0(uint8_t*, comm_get_buffer);
DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_get_signal);
DECLARE_FAKE_VALUE_FUNC1(uint32_t, comm_set_echo, uint8_t);
DECLARE_FAKE_VALUE_FUNC1(uint32_t, comm_set_pwr_gps, uint32_t);
DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_get_gps_info);
DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_get_operator);
DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_get_apn);
DECLARE_FAKE_VALUE_FUNC0(uint32_t, comm_open_apn);
DECLARE_FAKE_VALUE_FUNC4(uint32_t, comm_config_mqtt, uint8_t*, uint8_t*, uint8_t*, uint8_t*);
DECLARE_FAKE_VALUE_FUNC3(uint32_t, comm_mqtt_publish, char*, char*, uint8_t);

void mock_comm_Init(void);
void mock_comm_Verify(void);
void mock_comm_Destroy(void);

#endif // mock_comm_H
