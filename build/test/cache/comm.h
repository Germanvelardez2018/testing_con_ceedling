#include "src/include/core.h"


uint32_t comm_init(void);















void comm_deinit();

void comm_reset();















uint32_t comm_check(void);

void comm_sleep();







uint32_t comm_version(void);















void comm_resume();







uint32_t comm_config_irq(uint8_t value );



void comm_send_mesage(char* sms, char* cellphone);









uint8_t* comm_get_buffer();





uint32_t comm_get_signal();





uint32_t comm_set_echo(uint8_t echo_on);











uint32_t comm_set_pwr_gps(uint32_t gps_on);



uint32_t comm_get_gps_info();



uint32_t comm_get_operator(void);







uint32_t comm_get_apn(void);





uint32_t comm_open_apn(void);





uint32_t comm_config_mqtt(uint8_t* url, uint8_t* user, uint8_t* password, uint8_t* qos);





uint32_t comm_mqtt_publish(char* topic, char* payload, uint8_t len_payload);
