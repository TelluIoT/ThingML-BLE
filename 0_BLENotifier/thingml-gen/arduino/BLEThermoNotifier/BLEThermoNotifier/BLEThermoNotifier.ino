/*****************************************************************************
 * Headers for type : NeoPixelNotifier
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixelNotifier_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
uint16_t id_clock;
// Variables for the current instance state
int NeoPixelNotifier_NeoPixelStateChart_State;
// Variables for the properties of the instance
uint8_t NeoPixelNotifier_neopixel_logo_first_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_PULSE_maxcount_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_color_b_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_maxcount_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_l_color_b_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKALL_maxcount_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var;
uint8_t NeoPixelNotifier_neopixel_total_count_var;
int8_t NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_color_r_var;
uint8_t NeoPixelNotifier_neopixel_ring_last_var;
uint8_t NeoPixelNotifier_neopixel_ring_first_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_l_color_r_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_breath_speed_var;
uint8_t NeoPixelNotifier_neopixel_logo_last_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_l_color_g_var;
uint8_t NeoPixelNotifier_neopixel_pin_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_color_g_var;
int16_t NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var;
uint8_t NeoPixelNotifier_ring_brightness_divider_var;

};
// Declaration of prototypes outgoing messages:
void NeoPixelNotifier_NeoPixelStateChart_OnEntry(int state, struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_setRingColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifier_handle_ctrl_pulse(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_blink(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_off(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_setLogoColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifier_handle_ctrl_breath(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_setColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifier_handle_ctrl_solid(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_rotate(struct NeoPixelNotifier_Instance *_instance, int8_t speed);
void NeoPixelNotifier_handle_ctrl_blink_logo(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_clock_fps_clock(struct NeoPixelNotifier_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE 0
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE 1
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE 2
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE 3
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE 4
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE 5
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE 6
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE 7


/*****************************************************************************
 * Headers for type : BLENotifierGW
 *****************************************************************************/

// Definition of the instance struct:
struct BLENotifierGW_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_gateway;
uint16_t id_clock;
uint16_t id_neopixels;
// Variables for the current instance state
int BLENotifierGW_BLENotifierSC_State;
int BLENotifierGW_BLENotifierSC_OnCradle_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void BLENotifierGW_BLENotifierSC_OnEntry(int state, struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_handle_clock_timer_timeout(struct BLENotifierGW_Instance *_instance, uint8_t id);
void BLENotifierGW_handle_gateway_request_measurement(struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_handle_gateway_cancel_request(struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_handle_gateway_set_base_color(struct BLENotifierGW_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
// Declaration of callbacks for incoming messages:
void register_BLENotifierGW_send_clock_timer_start_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint32_t));
void register_external_BLENotifierGW_send_clock_timer_start_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint32_t));
void register_BLENotifierGW_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t));
void register_external_BLENotifierGW_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t));
void register_BLENotifierGW_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_BLENotifierGW_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t));
void register_BLENotifierGW_send_neopixels_setLogoColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_BLENotifierGW_send_neopixels_setLogoColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t));
void register_BLENotifierGW_send_neopixels_setRingColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_BLENotifierGW_send_neopixels_setRingColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t));
void register_BLENotifierGW_send_neopixels_off_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_external_BLENotifierGW_send_neopixels_off_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_BLENotifierGW_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_external_BLENotifierGW_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_BLENotifierGW_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifierGW_Instance *, int8_t));
void register_external_BLENotifierGW_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifierGW_Instance *, int8_t));
void register_BLENotifierGW_send_neopixels_breath_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_external_BLENotifierGW_send_neopixels_breath_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_BLENotifierGW_send_neopixels_solid_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_external_BLENotifierGW_send_neopixels_solid_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_BLENotifierGW_send_neopixels_blink_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_external_BLENotifierGW_send_neopixels_blink_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_BLENotifierGW_send_neopixels_blink_logo_listener(void (*_listener)(struct BLENotifierGW_Instance *));
void register_external_BLENotifierGW_send_neopixels_blink_logo_listener(void (*_listener)(struct BLENotifierGW_Instance *));

// Definition of the states:
#define BLENOTIFIERGW_BLENOTIFIERSC_STATE 0
#define BLENOTIFIERGW_BLENOTIFIERSC_INIT_STATE 1
#define BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE 2
#define BLENOTIFIERGW_BLENOTIFIERSC_OFFCRADLE_STATE 3
#define BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE 4
#define BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE 5
#define BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE 6


/* Adds and instance to the runtime and returns its id */
uint16_t add_instance(void * instance_struct);
/* Returns the instance with id */
void * instance_by_id(uint16_t id);

/* Returns the number of byte currently in the fifo */
int fifo_byte_length();
/* Returns the number of bytes currently available in the fifo */
int fifo_byte_available();
/* Returns true if the fifo is empty */
int fifo_empty();
/* Return true if the fifo is full */
int fifo_full();
/* Enqueue 1 byte in the fifo if there is space
   returns 1 for sucess and 0 if the fifo was full */
int fifo_enqueue(byte b);
/* Enqueue 1 byte in the fifo without checking for available space
   The caller should have checked that there is enough space */
int _fifo_enqueue(byte b);
/* Dequeue 1 byte in the fifo.
   The caller should check that the fifo is not empty */
byte fifo_dequeue();
/*****************************************************************************
 * Headers for type : GatewayCommandParser
 *****************************************************************************/

// Definition of the instance struct:
struct GatewayCommandParser_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_blerx;
uint16_t id_bletx;
uint16_t id_gateway;
// Variables for the current instance state
int GatewayCommandParser_GatewayCommandParserSC_State;
// Variables for the properties of the instance
uint8_t * GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var;
uint16_t GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var_size;
uint8_t GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var;

};
// Declaration of prototypes outgoing messages:
void GatewayCommandParser_GatewayCommandParserSC_OnEntry(int state, struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_handle_blerx_receive_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b);
// Declaration of callbacks for incoming messages:
void register_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t));
void register_external_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t));
void register_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *));
void register_external_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *));
void register_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t));
void register_GatewayCommandParser_send_gateway_cancel_request_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_cancel_request_listener(void (*_listener)(struct GatewayCommandParser_Instance *));

// Definition of the states:
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE 0
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE 1
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE 2
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE 3


/*****************************************************************************
 * Headers for type : Serial
 *****************************************************************************/

// Definition of the instance struct:
struct Serial_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_rx;
uint16_t id_tx;
// Variables for the current instance state
int Serial_SerialImpl_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void Serial_SerialImpl_OnEntry(int state, struct Serial_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t));
void register_external_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t));

// Definition of the states:
#define SERIAL_SERIALIMPL_STATE 0
#define SERIAL_SERIALIMPL_RECEIVING_STATE 1


//timer2

/*****************************************************************************
 * Implementation for type : BLENotifierGW
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLENotifierGW_BLENotifierSC_OnExit(int state, struct BLENotifierGW_Instance *_instance);
//Prototypes: Message Sending
void BLENotifierGW_send_clock_timer_start(struct BLENotifierGW_Instance *_instance, uint8_t id, uint32_t time);
void BLENotifierGW_send_clock_timer_cancel(struct BLENotifierGW_Instance *_instance, uint8_t id);
void BLENotifierGW_send_neopixels_setColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void BLENotifierGW_send_neopixels_setLogoColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void BLENotifierGW_send_neopixels_setRingColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void BLENotifierGW_send_neopixels_off(struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_send_neopixels_pulse(struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_send_neopixels_rotate(struct BLENotifierGW_Instance *_instance, int8_t speed);
void BLENotifierGW_send_neopixels_breath(struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_send_neopixels_solid(struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_send_neopixels_blink(struct BLENotifierGW_Instance *_instance);
void BLENotifierGW_send_neopixels_blink_logo(struct BLENotifierGW_Instance *_instance);
//Prototypes: Function
void f_BLENotifierGW_neo_standby(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_requested(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_measuring1(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_measuring2(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_bluetooth(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_gateway_ack(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_gateway_error(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_tellucloud_ack(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_tellucloud_error(struct BLENotifierGW_Instance *_instance);
void f_BLENotifierGW_neo_solid(struct BLENotifierGW_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
// Declaration of functions:
// Definition of function neo_standby
void f_BLENotifierGW_neo_standby(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setColor(_instance, 0, 50, 255);
BLENotifierGW_send_neopixels_breath(_instance);
}
// Definition of function neo_requested
void f_BLENotifierGW_neo_requested(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setColor(_instance, 0, 255, 96);
BLENotifierGW_send_neopixels_pulse(_instance);
}
// Definition of function neo_measuring1
void f_BLENotifierGW_neo_measuring1(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setColor(_instance, 255, 32, 0);
BLENotifierGW_send_neopixels_rotate(_instance, 12);
}
// Definition of function neo_measuring2
void f_BLENotifierGW_neo_measuring2(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setColor(_instance, 160, 140, 0);
BLENotifierGW_send_neopixels_rotate(_instance,  -2);
}
// Definition of function neo_bluetooth
void f_BLENotifierGW_neo_bluetooth(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setColor(_instance, 0, 40, 255);
BLENotifierGW_send_neopixels_blink(_instance);
}
// Definition of function neo_gateway_ack
void f_BLENotifierGW_neo_gateway_ack(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setRingColor(_instance, 0, 255, 40);
BLENotifierGW_send_neopixels_blink_logo(_instance);
}
// Definition of function neo_gateway_error
void f_BLENotifierGW_neo_gateway_error(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setColor(_instance, 255, 40, 0);
BLENotifierGW_send_neopixels_solid(_instance);
}
// Definition of function neo_tellucloud_ack
void f_BLENotifierGW_neo_tellucloud_ack(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setLogoColor(_instance, 0, 255, 40);
BLENotifierGW_send_neopixels_solid(_instance);
}
// Definition of function neo_tellucloud_error
void f_BLENotifierGW_neo_tellucloud_error(struct BLENotifierGW_Instance *_instance) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setLogoColor(_instance, 255, 40, 0);
BLENotifierGW_send_neopixels_solid(_instance);
}
// Definition of function neo_solid
void f_BLENotifierGW_neo_solid(struct BLENotifierGW_Instance *_instance, uint8_t r, uint8_t g, uint8_t b) {
BLENotifierGW_send_neopixels_off(_instance);
BLENotifierGW_send_neopixels_setColor(_instance, r, g, b);
BLENotifierGW_send_neopixels_solid(_instance);
}

// Sessions functionss:


// On Entry Actions:
void BLENotifierGW_BLENotifierSC_OnEntry(int state, struct BLENotifierGW_Instance *_instance) {
switch(state) {
case BLENOTIFIERGW_BLENOTIFIERSC_STATE:{
_instance->BLENotifierGW_BLENotifierSC_State = BLENOTIFIERGW_BLENOTIFIERSC_INIT_STATE;
BLENotifierGW_BLENotifierSC_OnEntry(_instance->BLENotifierGW_BLENotifierSC_State, _instance);
break;
}
case BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE:{
BLENotifierGW_BLENotifierSC_OnEntry(_instance->BLENotifierGW_BLENotifierSC_OnCradle_State, _instance);
break;
}
case BLENOTIFIERGW_BLENOTIFIERSC_INIT_STATE:{
f_BLENotifierGW_neo_solid(_instance, 0, 128, 32);
BLENotifierGW_send_clock_timer_start(_instance, 0, 1000);
break;
}
case BLENOTIFIERGW_BLENOTIFIERSC_OFFCRADLE_STATE:{
f_BLENotifierGW_neo_measuring2(_instance);
break;
}
case BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE:{
f_BLENotifierGW_neo_standby(_instance);
break;
}
case BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE:{
f_BLENotifierGW_neo_requested(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void BLENotifierGW_BLENotifierSC_OnExit(int state, struct BLENotifierGW_Instance *_instance) {
switch(state) {
case BLENOTIFIERGW_BLENOTIFIERSC_STATE:{
BLENotifierGW_BLENotifierSC_OnExit(_instance->BLENotifierGW_BLENotifierSC_State, _instance);
break;}
case BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE:{
BLENotifierGW_BLENotifierSC_OnExit(_instance->BLENotifierGW_BLENotifierSC_OnCradle_State, _instance);
break;}
case BLENOTIFIERGW_BLENOTIFIERSC_INIT_STATE:{
break;}
case BLENOTIFIERGW_BLENOTIFIERSC_OFFCRADLE_STATE:{
break;}
case BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE:{
break;}
case BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLENotifierGW_handle_clock_timer_timeout(struct BLENotifierGW_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifierGW_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifierGW_BLENotifierSC_State == BLENOTIFIERGW_BLENOTIFIERSC_INIT_STATE) {
if (BLENotifierGW_BLENotifierSC_State_event_consumed == 0 && id == 0) {
BLENotifierGW_BLENotifierSC_OnExit(BLENOTIFIERGW_BLENOTIFIERSC_INIT_STATE, _instance);
_instance->BLENotifierGW_BLENotifierSC_State = BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE;
f_BLENotifierGW_neo_standby(_instance);
BLENotifierGW_BLENotifierSC_OnEntry(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE, _instance);
BLENotifierGW_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//Region OnCradle
uint8_t BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 0;
//End Region OnCradle
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifierGW_handle_gateway_request_measurement(struct BLENotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifierGW_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifierGW_BLENotifierSC_State == BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE) {
//Region OnCradle
uint8_t BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 0;
if (_instance->BLENotifierGW_BLENotifierSC_OnCradle_State == BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE) {
if (BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed == 0 && 1) {
BLENotifierGW_BLENotifierSC_OnExit(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE, _instance);
_instance->BLENotifierGW_BLENotifierSC_OnCradle_State = BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE;
BLENotifierGW_BLENotifierSC_OnEntry(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE, _instance);
BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 1;
}
}
//End Region OnCradle
//End dsregion OnCradle
}
//End Region BLENotifierSC
//Region OnCradle
uint8_t BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 0;
if (_instance->BLENotifierGW_BLENotifierSC_OnCradle_State == BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE) {
if (BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed == 0 && 1) {
BLENotifierGW_BLENotifierSC_OnExit(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE, _instance);
_instance->BLENotifierGW_BLENotifierSC_OnCradle_State = BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE;
BLENotifierGW_BLENotifierSC_OnEntry(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE, _instance);
BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 1;
}
}
//End Region OnCradle
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifierGW_handle_gateway_cancel_request(struct BLENotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifierGW_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifierGW_BLENotifierSC_State == BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STATE) {
//Region OnCradle
uint8_t BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 0;
if (_instance->BLENotifierGW_BLENotifierSC_OnCradle_State == BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE) {
if (BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed == 0 && 1) {
BLENotifierGW_BLENotifierSC_OnExit(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE, _instance);
_instance->BLENotifierGW_BLENotifierSC_OnCradle_State = BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE;
BLENotifierGW_BLENotifierSC_OnEntry(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE, _instance);
BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 1;
}
}
//End Region OnCradle
//End dsregion OnCradle
}
//End Region BLENotifierSC
//Region OnCradle
uint8_t BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 0;
if (_instance->BLENotifierGW_BLENotifierSC_OnCradle_State == BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE) {
if (BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed == 0 && 1) {
BLENotifierGW_BLENotifierSC_OnExit(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_RED_STATE, _instance);
_instance->BLENotifierGW_BLENotifierSC_OnCradle_State = BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE;
BLENotifierGW_BLENotifierSC_OnEntry(BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE, _instance);
BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 1;
}
}
//End Region OnCradle
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifierGW_handle_gateway_set_base_color(struct BLENotifierGW_Instance *_instance, uint8_t r, uint8_t g, uint8_t b) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifierGW_BLENotifierSC_State_event_consumed = 0;
//End Region BLENotifierSC
//Region OnCradle
uint8_t BLENotifierGW_BLENotifierSC_OnCradle_State_event_consumed = 0;
//End Region OnCradle
//End dsregion BLENotifierSC
//Session list: 
if (1) {
BLENotifierGW_send_neopixels_setColor(_instance, r, g, b);
BLENotifierGW_BLENotifierSC_State_event_consumed = 1;
}
}

// Observers for outgoing messages:
void (*external_BLENotifierGW_send_clock_timer_start_listener)(struct BLENotifierGW_Instance *, uint8_t, uint32_t)= 0x0;
void (*BLENotifierGW_send_clock_timer_start_listener)(struct BLENotifierGW_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_BLENotifierGW_send_clock_timer_start_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint32_t)){
external_BLENotifierGW_send_clock_timer_start_listener = _listener;
}
void register_BLENotifierGW_send_clock_timer_start_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint32_t)){
BLENotifierGW_send_clock_timer_start_listener = _listener;
}
void BLENotifierGW_send_clock_timer_start(struct BLENotifierGW_Instance *_instance, uint8_t id, uint32_t time){
if (BLENotifierGW_send_clock_timer_start_listener != 0x0) BLENotifierGW_send_clock_timer_start_listener(_instance, id, time);
if (external_BLENotifierGW_send_clock_timer_start_listener != 0x0) external_BLENotifierGW_send_clock_timer_start_listener(_instance, id, time);
;
}
void (*external_BLENotifierGW_send_clock_timer_cancel_listener)(struct BLENotifierGW_Instance *, uint8_t)= 0x0;
void (*BLENotifierGW_send_clock_timer_cancel_listener)(struct BLENotifierGW_Instance *, uint8_t)= 0x0;
void register_external_BLENotifierGW_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t)){
external_BLENotifierGW_send_clock_timer_cancel_listener = _listener;
}
void register_BLENotifierGW_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t)){
BLENotifierGW_send_clock_timer_cancel_listener = _listener;
}
void BLENotifierGW_send_clock_timer_cancel(struct BLENotifierGW_Instance *_instance, uint8_t id){
if (BLENotifierGW_send_clock_timer_cancel_listener != 0x0) BLENotifierGW_send_clock_timer_cancel_listener(_instance, id);
if (external_BLENotifierGW_send_clock_timer_cancel_listener != 0x0) external_BLENotifierGW_send_clock_timer_cancel_listener(_instance, id);
;
}
void (*external_BLENotifierGW_send_neopixels_setColor_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLENotifierGW_send_neopixels_setColor_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLENotifierGW_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)){
external_BLENotifierGW_send_neopixels_setColor_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)){
BLENotifierGW_send_neopixels_setColor_listener = _listener;
}
void BLENotifierGW_send_neopixels_setColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (BLENotifierGW_send_neopixels_setColor_listener != 0x0) BLENotifierGW_send_neopixels_setColor_listener(_instance, red, green, blue);
if (external_BLENotifierGW_send_neopixels_setColor_listener != 0x0) external_BLENotifierGW_send_neopixels_setColor_listener(_instance, red, green, blue);
;
}
void (*external_BLENotifierGW_send_neopixels_setLogoColor_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLENotifierGW_send_neopixels_setLogoColor_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLENotifierGW_send_neopixels_setLogoColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)){
external_BLENotifierGW_send_neopixels_setLogoColor_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_setLogoColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)){
BLENotifierGW_send_neopixels_setLogoColor_listener = _listener;
}
void BLENotifierGW_send_neopixels_setLogoColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (BLENotifierGW_send_neopixels_setLogoColor_listener != 0x0) BLENotifierGW_send_neopixels_setLogoColor_listener(_instance, red, green, blue);
if (external_BLENotifierGW_send_neopixels_setLogoColor_listener != 0x0) external_BLENotifierGW_send_neopixels_setLogoColor_listener(_instance, red, green, blue);
;
}
void (*external_BLENotifierGW_send_neopixels_setRingColor_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLENotifierGW_send_neopixels_setRingColor_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLENotifierGW_send_neopixels_setRingColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)){
external_BLENotifierGW_send_neopixels_setRingColor_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_setRingColor_listener(void (*_listener)(struct BLENotifierGW_Instance *, uint8_t, uint8_t, uint8_t)){
BLENotifierGW_send_neopixels_setRingColor_listener = _listener;
}
void BLENotifierGW_send_neopixels_setRingColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (BLENotifierGW_send_neopixels_setRingColor_listener != 0x0) BLENotifierGW_send_neopixels_setRingColor_listener(_instance, red, green, blue);
if (external_BLENotifierGW_send_neopixels_setRingColor_listener != 0x0) external_BLENotifierGW_send_neopixels_setRingColor_listener(_instance, red, green, blue);
;
}
void (*external_BLENotifierGW_send_neopixels_off_listener)(struct BLENotifierGW_Instance *)= 0x0;
void (*BLENotifierGW_send_neopixels_off_listener)(struct BLENotifierGW_Instance *)= 0x0;
void register_external_BLENotifierGW_send_neopixels_off_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
external_BLENotifierGW_send_neopixels_off_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_off_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
BLENotifierGW_send_neopixels_off_listener = _listener;
}
void BLENotifierGW_send_neopixels_off(struct BLENotifierGW_Instance *_instance){
if (BLENotifierGW_send_neopixels_off_listener != 0x0) BLENotifierGW_send_neopixels_off_listener(_instance);
if (external_BLENotifierGW_send_neopixels_off_listener != 0x0) external_BLENotifierGW_send_neopixels_off_listener(_instance);
;
}
void (*external_BLENotifierGW_send_neopixels_pulse_listener)(struct BLENotifierGW_Instance *)= 0x0;
void (*BLENotifierGW_send_neopixels_pulse_listener)(struct BLENotifierGW_Instance *)= 0x0;
void register_external_BLENotifierGW_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
external_BLENotifierGW_send_neopixels_pulse_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
BLENotifierGW_send_neopixels_pulse_listener = _listener;
}
void BLENotifierGW_send_neopixels_pulse(struct BLENotifierGW_Instance *_instance){
if (BLENotifierGW_send_neopixels_pulse_listener != 0x0) BLENotifierGW_send_neopixels_pulse_listener(_instance);
if (external_BLENotifierGW_send_neopixels_pulse_listener != 0x0) external_BLENotifierGW_send_neopixels_pulse_listener(_instance);
;
}
void (*external_BLENotifierGW_send_neopixels_rotate_listener)(struct BLENotifierGW_Instance *, int8_t)= 0x0;
void (*BLENotifierGW_send_neopixels_rotate_listener)(struct BLENotifierGW_Instance *, int8_t)= 0x0;
void register_external_BLENotifierGW_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifierGW_Instance *, int8_t)){
external_BLENotifierGW_send_neopixels_rotate_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifierGW_Instance *, int8_t)){
BLENotifierGW_send_neopixels_rotate_listener = _listener;
}
void BLENotifierGW_send_neopixels_rotate(struct BLENotifierGW_Instance *_instance, int8_t speed){
if (BLENotifierGW_send_neopixels_rotate_listener != 0x0) BLENotifierGW_send_neopixels_rotate_listener(_instance, speed);
if (external_BLENotifierGW_send_neopixels_rotate_listener != 0x0) external_BLENotifierGW_send_neopixels_rotate_listener(_instance, speed);
;
}
void (*external_BLENotifierGW_send_neopixels_breath_listener)(struct BLENotifierGW_Instance *)= 0x0;
void (*BLENotifierGW_send_neopixels_breath_listener)(struct BLENotifierGW_Instance *)= 0x0;
void register_external_BLENotifierGW_send_neopixels_breath_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
external_BLENotifierGW_send_neopixels_breath_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_breath_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
BLENotifierGW_send_neopixels_breath_listener = _listener;
}
void BLENotifierGW_send_neopixels_breath(struct BLENotifierGW_Instance *_instance){
if (BLENotifierGW_send_neopixels_breath_listener != 0x0) BLENotifierGW_send_neopixels_breath_listener(_instance);
if (external_BLENotifierGW_send_neopixels_breath_listener != 0x0) external_BLENotifierGW_send_neopixels_breath_listener(_instance);
;
}
void (*external_BLENotifierGW_send_neopixels_solid_listener)(struct BLENotifierGW_Instance *)= 0x0;
void (*BLENotifierGW_send_neopixels_solid_listener)(struct BLENotifierGW_Instance *)= 0x0;
void register_external_BLENotifierGW_send_neopixels_solid_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
external_BLENotifierGW_send_neopixels_solid_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_solid_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
BLENotifierGW_send_neopixels_solid_listener = _listener;
}
void BLENotifierGW_send_neopixels_solid(struct BLENotifierGW_Instance *_instance){
if (BLENotifierGW_send_neopixels_solid_listener != 0x0) BLENotifierGW_send_neopixels_solid_listener(_instance);
if (external_BLENotifierGW_send_neopixels_solid_listener != 0x0) external_BLENotifierGW_send_neopixels_solid_listener(_instance);
;
}
void (*external_BLENotifierGW_send_neopixels_blink_listener)(struct BLENotifierGW_Instance *)= 0x0;
void (*BLENotifierGW_send_neopixels_blink_listener)(struct BLENotifierGW_Instance *)= 0x0;
void register_external_BLENotifierGW_send_neopixels_blink_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
external_BLENotifierGW_send_neopixels_blink_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_blink_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
BLENotifierGW_send_neopixels_blink_listener = _listener;
}
void BLENotifierGW_send_neopixels_blink(struct BLENotifierGW_Instance *_instance){
if (BLENotifierGW_send_neopixels_blink_listener != 0x0) BLENotifierGW_send_neopixels_blink_listener(_instance);
if (external_BLENotifierGW_send_neopixels_blink_listener != 0x0) external_BLENotifierGW_send_neopixels_blink_listener(_instance);
;
}
void (*external_BLENotifierGW_send_neopixels_blink_logo_listener)(struct BLENotifierGW_Instance *)= 0x0;
void (*BLENotifierGW_send_neopixels_blink_logo_listener)(struct BLENotifierGW_Instance *)= 0x0;
void register_external_BLENotifierGW_send_neopixels_blink_logo_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
external_BLENotifierGW_send_neopixels_blink_logo_listener = _listener;
}
void register_BLENotifierGW_send_neopixels_blink_logo_listener(void (*_listener)(struct BLENotifierGW_Instance *)){
BLENotifierGW_send_neopixels_blink_logo_listener = _listener;
}
void BLENotifierGW_send_neopixels_blink_logo(struct BLENotifierGW_Instance *_instance){
if (BLENotifierGW_send_neopixels_blink_logo_listener != 0x0) BLENotifierGW_send_neopixels_blink_logo_listener(_instance);
if (external_BLENotifierGW_send_neopixels_blink_logo_listener != 0x0) external_BLENotifierGW_send_neopixels_blink_logo_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : NeoPixelNotifier
 *****************************************************************************/


// BEGIN: Code from the c_global annotation NeoPixelNotifier

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip;

#define BREATH_LEN 36
uint8_t breath[] = {0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};

#define PULSE_LEN 37
uint8_t pulse[] =  {32, 40, 50, 55, 50, 32, 32, 32, 20, 10, 20, 40, 80, 160, 230, 255, 230, 160, 80, 40, 20, 10, 5, 2, 0, 6, 16, 30, 32, 32, 40, 48, 55, 60, 50, 36, 32};

#define BLINK_LEN 11
uint8_t blink[] =  {0, 6, 24, 52, 88, 127, 166, 202, 230, 248, 255};

#define ROTATE_LEN 10
uint8_t rotatep[] =  {0, 0, 255, 0, 0, 0, 0, 255, 0, 0};

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

// END: Code from the c_global annotation NeoPixelNotifier

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixelNotifier_NeoPixelStateChart_OnExit(int state, struct NeoPixelNotifier_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_NeoPixelNotifier_setPixelColor(struct NeoPixelNotifier_Instance *_instance, uint8_t pixel, uint32_t color);
uint32_t f_NeoPixelNotifier_getColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void f_NeoPixelNotifier_updateNeopixels(struct NeoPixelNotifier_Instance *_instance);
uint8_t f_NeoPixelNotifier_breath_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time, uint8_t max);
uint8_t f_NeoPixelNotifier_rotate_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t angle, uint8_t max);
uint8_t f_NeoPixelNotifier_pulse_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time);
uint8_t f_NeoPixelNotifier_blink_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time);
void f_NeoPixelNotifier_initializeNeopixels(struct NeoPixelNotifier_Instance *_instance);
// Declaration of functions:
// Definition of function setPixelColor
void f_NeoPixelNotifier_setPixelColor(struct NeoPixelNotifier_Instance *_instance, uint8_t pixel, uint32_t color) {
strip.setPixelColor(pixel, color);
}
// Definition of function getColor
uint32_t f_NeoPixelNotifier_getColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
return strip.Color(red, green, blue);
}
// Definition of function updateNeopixels
void f_NeoPixelNotifier_updateNeopixels(struct NeoPixelNotifier_Instance *_instance) {
strip.show();
}
// Definition of function breath_brightness
uint8_t f_NeoPixelNotifier_breath_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time, uint8_t max) {
if(time > max / 2) {
return f_NeoPixelNotifier_breath_brightness(_instance, max - time, max);

}
if(time == max / 2) {
return breath[BREATH_LEN-1];

}
;uint16_t index = (time * BREATH_LEN) / (max / 2);
;uint16_t prev = (index * (max / 2)) / BREATH_LEN;
;uint16_t next = ((index + 1) * (max / 2)) / BREATH_LEN;
;uint16_t nextv;
if(index < BREATH_LEN - 1) {
nextv = breath[index + 1];

} else {
nextv = breath[index];

}
return ((next - time) * breath[index] + (time - prev) * nextv) / (next - prev);
}
// Definition of function rotate_brightness
uint8_t f_NeoPixelNotifier_rotate_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t angle, uint8_t max) {
;uint16_t index = (angle * ROTATE_LEN) / max;
;uint16_t prev = (index * max) / ROTATE_LEN;
;uint16_t next = ((index + 1) * max) / ROTATE_LEN;
;uint8_t nextv;
if(index < ROTATE_LEN - 1) {
nextv = rotatep[index + 1];

} else {
nextv = rotatep[0];

}
return ((next - angle) * rotatep[index] + (angle - prev) * nextv) / (next - prev);
}
// Definition of function pulse_brightness
uint8_t f_NeoPixelNotifier_pulse_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time) {
if(time < PULSE_LEN) {
return pulse[time];

} else {
return pulse[0];

}
}
// Definition of function blink_brightness
uint8_t f_NeoPixelNotifier_blink_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time) {
if(time < BLINK_LEN) {
return blink[time];

} else {
if(time < BLINK_LEN*2) {
return blink[BLINK_LEN*2-time-1];

} else {
return blink[0];

}

}
}
// Definition of function initializeNeopixels
void f_NeoPixelNotifier_initializeNeopixels(struct NeoPixelNotifier_Instance *_instance) {
strip = Adafruit_NeoPixel(_instance->NeoPixelNotifier_neopixel_total_count_var, _instance->NeoPixelNotifier_neopixel_pin_var, NEO_GRBW + NEO_KHZ800);
		 strip.begin();
		 strip.setBrightness(255);
		 strip.show();
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, 0, 50, 255);
f_NeoPixelNotifier_setPixelColor(_instance, _instance->NeoPixelNotifier_neopixel_total_count_var, color);
f_NeoPixelNotifier_updateNeopixels(_instance);
}

// Sessions functionss:


// On Entry Actions:
void NeoPixelNotifier_NeoPixelStateChart_OnEntry(int state, struct NeoPixelNotifier_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE:{
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE;
f_NeoPixelNotifier_initializeNeopixels(_instance);
NeoPixelNotifier_NeoPixelStateChart_OnEntry(_instance->NeoPixelNotifier_NeoPixelStateChart_State, _instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE:{
;uint8_t i = 0;
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, 0, 0, 0);
while(i < _instance->NeoPixelNotifier_neopixel_total_count_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE:{
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE:{
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var);
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE:{
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE:{
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var);
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE:{
;uint32_t rcolor = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixelNotifier_NeoPixelStateChart_OnExit(int state, struct NeoPixelNotifier_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE:{
NeoPixelNotifier_NeoPixelStateChart_OnExit(_instance->NeoPixelNotifier_NeoPixelStateChart_State, _instance);
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixelNotifier_handle_ctrl_setRingColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var = red / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var = green / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var = blue / _instance->NeoPixelNotifier_ring_brightness_divider_var;
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifier_handle_ctrl_pulse(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_blink(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_off(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_setLogoColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var = red;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var = green;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var = blue;
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifier_handle_ctrl_breath(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_setColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var = red / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var = green / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var = blue / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var = red;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var = green;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var = blue;
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifier_handle_ctrl_solid(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_rotate(struct NeoPixelNotifier_Instance *_instance, int8_t speed) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE;
_instance->NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var = speed;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_blink_logo(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_clock_fps_clock(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint32_t rcolor = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var);
;uint32_t lcolor = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
;uint16_t pangle = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var + (i * _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var) / (_instance->NeoPixelNotifier_neopixel_ring_last_var - _instance->NeoPixelNotifier_neopixel_ring_first_var + 1);
pangle = pangle % _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var;
;uint8_t bright = f_NeoPixelNotifier_rotate_brightness(_instance, pangle, _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var);
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var * bright) / 256);
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var + _instance->NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var < 0) {
_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var + _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var;

}
if(_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var > _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var - 1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var - _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_breath_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var, _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var);
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_pulse_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var);
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_blink_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var);
;uint32_t rcolor = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
;uint32_t lcolor = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var * bright) / 256);
i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_blink_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var);
;uint32_t lcolor = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}

// Observers for outgoing messages:



/*****************************************************************************
 * Implementation for type : GatewayCommandParser
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void GatewayCommandParser_GatewayCommandParserSC_OnExit(int state, struct GatewayCommandParser_Instance *_instance);
//Prototypes: Message Sending
void GatewayCommandParser_send_bletx_write_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b);
void GatewayCommandParser_send_bletx_print_message(struct GatewayCommandParser_Instance *_instance, char * msg);
void GatewayCommandParser_send_gateway_request_measurement(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_measurement_received(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_bad_measurement(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_measurement_stored(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_set_base_color(struct GatewayCommandParser_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
void GatewayCommandParser_send_gateway_cancel_request(struct GatewayCommandParser_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void GatewayCommandParser_GatewayCommandParserSC_OnEntry(int state, struct GatewayCommandParser_Instance *_instance) {
switch(state) {
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE:{
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_GatewayCommandParserSC_OnEntry(_instance->GatewayCommandParser_GatewayCommandParserSC_State, _instance);
break;
}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE:{
break;
}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE:{
break;
}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE:{
_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var = 0;
break;
}
default: break;
}
}

// On Exit Actions:
void GatewayCommandParser_GatewayCommandParserSC_OnExit(int state, struct GatewayCommandParser_Instance *_instance) {
switch(state) {
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE:{
GatewayCommandParser_GatewayCommandParserSC_OnExit(_instance->GatewayCommandParser_GatewayCommandParserSC_State, _instance);
break;}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE:{
break;}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE:{
break;}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void GatewayCommandParser_handle_blerx_receive_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b) {
if(!(_instance->active)) return;
//Region GatewayCommandParserSC
uint8_t GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 0;
if (_instance->GatewayCommandParser_GatewayCommandParserSC_State == GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE) {
if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == '!') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE;
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
}
else if (_instance->GatewayCommandParser_GatewayCommandParserSC_State == GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE) {
if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'C') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE;
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'R') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_request_measurement(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'K') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_cancel_request(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'G') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_measurement_received(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'E') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_bad_measurement(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'S') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_measurement_stored(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
}
else if (_instance->GatewayCommandParser_GatewayCommandParserSC_State == GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE) {
if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var == 2) {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_set_base_color(_instance, _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[0]
, _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[1]
, b);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var < 2) {
_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var] = b;
_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var = _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var + 1;
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
}
//End Region GatewayCommandParserSC
//End dsregion GatewayCommandParserSC
//Session list: 
}

// Observers for outgoing messages:
void (*external_GatewayCommandParser_send_bletx_write_byte_listener)(struct GatewayCommandParser_Instance *, uint8_t)= 0x0;
void (*GatewayCommandParser_send_bletx_write_byte_listener)(struct GatewayCommandParser_Instance *, uint8_t)= 0x0;
void register_external_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t)){
external_GatewayCommandParser_send_bletx_write_byte_listener = _listener;
}
void register_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t)){
GatewayCommandParser_send_bletx_write_byte_listener = _listener;
}
void GatewayCommandParser_send_bletx_write_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b){
if (GatewayCommandParser_send_bletx_write_byte_listener != 0x0) GatewayCommandParser_send_bletx_write_byte_listener(_instance, b);
if (external_GatewayCommandParser_send_bletx_write_byte_listener != 0x0) external_GatewayCommandParser_send_bletx_write_byte_listener(_instance, b);
;
}
void (*external_GatewayCommandParser_send_bletx_print_message_listener)(struct GatewayCommandParser_Instance *, char *)= 0x0;
void (*GatewayCommandParser_send_bletx_print_message_listener)(struct GatewayCommandParser_Instance *, char *)= 0x0;
void register_external_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *)){
external_GatewayCommandParser_send_bletx_print_message_listener = _listener;
}
void register_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *)){
GatewayCommandParser_send_bletx_print_message_listener = _listener;
}
void GatewayCommandParser_send_bletx_print_message(struct GatewayCommandParser_Instance *_instance, char * msg){
if (GatewayCommandParser_send_bletx_print_message_listener != 0x0) GatewayCommandParser_send_bletx_print_message_listener(_instance, msg);
if (external_GatewayCommandParser_send_bletx_print_message_listener != 0x0) external_GatewayCommandParser_send_bletx_print_message_listener(_instance, msg);
;
}
void (*external_GatewayCommandParser_send_gateway_request_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_request_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_request_measurement_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_request_measurement_listener = _listener;
}
void GatewayCommandParser_send_gateway_request_measurement(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_request_measurement_listener != 0x0) GatewayCommandParser_send_gateway_request_measurement_listener(_instance);
if (external_GatewayCommandParser_send_gateway_request_measurement_listener != 0x0) external_GatewayCommandParser_send_gateway_request_measurement_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_measurement_received_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_measurement_received_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_measurement_received_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_measurement_received_listener = _listener;
}
void GatewayCommandParser_send_gateway_measurement_received(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_measurement_received_listener != 0x0) GatewayCommandParser_send_gateway_measurement_received_listener(_instance);
if (external_GatewayCommandParser_send_gateway_measurement_received_listener != 0x0) external_GatewayCommandParser_send_gateway_measurement_received_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_bad_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_bad_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_bad_measurement_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_bad_measurement_listener = _listener;
}
void GatewayCommandParser_send_gateway_bad_measurement(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_bad_measurement_listener != 0x0) GatewayCommandParser_send_gateway_bad_measurement_listener(_instance);
if (external_GatewayCommandParser_send_gateway_bad_measurement_listener != 0x0) external_GatewayCommandParser_send_gateway_bad_measurement_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_measurement_stored_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_measurement_stored_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_measurement_stored_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_measurement_stored_listener = _listener;
}
void GatewayCommandParser_send_gateway_measurement_stored(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_measurement_stored_listener != 0x0) GatewayCommandParser_send_gateway_measurement_stored_listener(_instance);
if (external_GatewayCommandParser_send_gateway_measurement_stored_listener != 0x0) external_GatewayCommandParser_send_gateway_measurement_stored_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_set_base_color_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*GatewayCommandParser_send_gateway_set_base_color_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)){
external_GatewayCommandParser_send_gateway_set_base_color_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)){
GatewayCommandParser_send_gateway_set_base_color_listener = _listener;
}
void GatewayCommandParser_send_gateway_set_base_color(struct GatewayCommandParser_Instance *_instance, uint8_t r, uint8_t g, uint8_t b){
if (GatewayCommandParser_send_gateway_set_base_color_listener != 0x0) GatewayCommandParser_send_gateway_set_base_color_listener(_instance, r, g, b);
if (external_GatewayCommandParser_send_gateway_set_base_color_listener != 0x0) external_GatewayCommandParser_send_gateway_set_base_color_listener(_instance, r, g, b);
;
}
void (*external_GatewayCommandParser_send_gateway_cancel_request_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_cancel_request_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_cancel_request_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_cancel_request_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_cancel_request_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_cancel_request_listener = _listener;
}
void GatewayCommandParser_send_gateway_cancel_request(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_cancel_request_listener != 0x0) GatewayCommandParser_send_gateway_cancel_request_listener(_instance);
if (external_GatewayCommandParser_send_gateway_cancel_request_listener != 0x0) external_GatewayCommandParser_send_gateway_cancel_request_listener(_instance);
;
}




#define MAX_INSTANCES 12
#define FIFO_SIZE 256

/*********************************
 * Instance IDs and lookup
 *********************************/

void * instances[MAX_INSTANCES];
uint16_t instances_count = 0;

void * instance_by_id(uint16_t id) {
  return instances[id];
}

uint16_t add_instance(void * instance_struct) {
  instances[instances_count] = instance_struct;
  return instances_count++;
}

/******************************************
 * Simple byte FIFO implementation
 ******************************************/

byte fifo[FIFO_SIZE];
int fifo_head = 0;
int fifo_tail = 0;

// Returns the number of byte currently in the fifo
int fifo_byte_length() {
  if (fifo_tail >= fifo_head)
    return fifo_tail - fifo_head;
  return fifo_tail + FIFO_SIZE - fifo_head;
}

// Returns the number of bytes currently available in the fifo
int fifo_byte_available() {
  return FIFO_SIZE - 1 - fifo_byte_length();
}

// Returns true if the fifo is empty
int fifo_empty() {
  return fifo_head == fifo_tail;
}

// Return true if the fifo is full
int fifo_full() {
  return fifo_head == ((fifo_tail + 1) % FIFO_SIZE);
}

// Enqueue 1 byte in the fifo if there is space
// returns 1 for sucess and 0 if the fifo was full
int fifo_enqueue(byte b) {
  int new_tail = (fifo_tail + 1) % FIFO_SIZE;
  if (new_tail == fifo_head) return 0; // the fifo is full
  fifo[fifo_tail] = b;
  fifo_tail = new_tail;
  return 1;
}

// Enqueue 1 byte in the fifo without checking for available space
// The caller should have checked that there is enough space
int _fifo_enqueue(byte b) {
  fifo[fifo_tail] = b;
  fifo_tail = (fifo_tail + 1) % FIFO_SIZE;
  return 0; // Dummy added by steffend
}

// Dequeue 1 byte in the fifo.
// The caller should check that the fifo is not empty
byte fifo_dequeue() {
  if (!fifo_empty()) {
    byte result = fifo[fifo_head];
    fifo_head = (fifo_head + 1) % FIFO_SIZE;
    return result;
  }
  return 0;
}

#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;

uint8_t timer2_tic_flags = 0;

void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id);

uint8_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if((timer2_interrupt_counter % 33) == 0) {
timer2_tic_flags |= 0b00000001;
}
if(timer2_interrupt_counter >= 33) {
timer2_interrupt_counter = 0;
}
}



struct timer2_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
} timer2_instance;

void timer2_setup() {
	// Run timer2 interrupt up counting at 250kHz 
		 TCCR2A = 0;
		 TCCR2B = 1<<CS22 | 0<<CS21 | 0<<CS20;
		
		 //Timer2 Overflow Interrupt Enable
		 TIMSK2 |= 1<<TOIE2;


	timer2_prev_1sec = millis() + 1000;
}

void timer2_set_listener_id(uint16_t id) {
	timer2_instance.listener_id = id;
}

void timer2_timer_start(uint8_t id, uint32_t ms) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = ms + millis();
}
}

void timer2_timer_cancel(uint8_t id) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = 0;
}
}

void timer2_timeout(uint8_t id) {
uint8_t enqueue_buf[3];
enqueue_buf[0] = (1 >> 8) & 0xFF;
enqueue_buf[1] = 1 & 0xFF;
enqueue_buf[2] = id;
externalMessageEnqueue(enqueue_buf, 3, timer2_instance.listener_id);
}

void timer2_33ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (2 >> 8) & 0xFF;
enqueue_buf[1] = 2 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}





void timer2_read() {
    uint32_t tms = millis();
    uint8_t t;
for(t = 0; t < 4; t++) {
if((timer2_timer[t] > 0) && (timer2_timer[t] < tms)) {
timer2_timer[t] = 0;
timer2_timeout(t);
}
}

    if (timer2_prev_1sec < tms) {
        timer2_prev_1sec += 1000;
    }
    if((timer2_tic_flags & 0b00000001) >> 0) {
timer2_33ms_tic();
timer2_tic_flags &= 0b11111110;
}

}
// Forwarding of messages timer2::BLENotifierGW::clock::timer_start
void forward_timer2_BLENotifierGW_send_clock_timer_start(struct BLENotifierGW_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::BLENotifierGW::clock::timer_cancel
void forward_timer2_BLENotifierGW_send_clock_timer_cancel(struct BLENotifierGW_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

/*****************************************************************************
 * Implementation for type : Serial
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Serial_SerialImpl_OnExit(int state, struct Serial_Instance *_instance);
//Prototypes: Message Sending
void Serial_send_rx_receive_byte(struct Serial_Instance *_instance, uint8_t b);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void Serial_SerialImpl_OnEntry(int state, struct Serial_Instance *_instance) {
switch(state) {
case SERIAL_SERIALIMPL_STATE:{
_instance->Serial_SerialImpl_State = SERIAL_SERIALIMPL_RECEIVING_STATE;
Serial_SerialImpl_OnEntry(_instance->Serial_SerialImpl_State, _instance);
break;
}
case SERIAL_SERIALIMPL_RECEIVING_STATE:{
Serial.begin(9600);
break;
}
default: break;
}
}

// On Exit Actions:
void Serial_SerialImpl_OnExit(int state, struct Serial_Instance *_instance) {
switch(state) {
case SERIAL_SERIALIMPL_STATE:{
Serial_SerialImpl_OnExit(_instance->Serial_SerialImpl_State, _instance);
break;}
case SERIAL_SERIALIMPL_RECEIVING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
int Serial_handle_empty_event(struct Serial_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region SerialImpl
if (_instance->Serial_SerialImpl_State == SERIAL_SERIALIMPL_RECEIVING_STATE) {
if (Serial.available() > 0) {
Serial_send_rx_receive_byte(_instance, (char)Serial.read());
return 1;
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
void (*external_Serial_send_rx_receive_byte_listener)(struct Serial_Instance *, uint8_t)= 0x0;
void (*Serial_send_rx_receive_byte_listener)(struct Serial_Instance *, uint8_t)= 0x0;
void register_external_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t)){
external_Serial_send_rx_receive_byte_listener = _listener;
}
void register_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t)){
Serial_send_rx_receive_byte_listener = _listener;
}
void Serial_send_rx_receive_byte(struct Serial_Instance *_instance, uint8_t b){
if (Serial_send_rx_receive_byte_listener != 0x0) Serial_send_rx_receive_byte_listener(_instance, b);
if (external_Serial_send_rx_receive_byte_listener != 0x0) external_Serial_send_rx_receive_byte_listener(_instance, b);
;
}






/*****************************************************************************
 * Definitions for configuration : BLEThermoNotifier
 *****************************************************************************/

uint8_t array_gwcmd_GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[2];
//Declaration of instance variables
//Instance notifier
// Variables for the properties of the instance
struct BLENotifierGW_Instance notifier_var;
// Variables for the sessions of the instance
//Instance uart
// Variables for the properties of the instance
struct Serial_Instance uart_var;
// Variables for the sessions of the instance
//Instance neopixels
// Variables for the properties of the instance
struct NeoPixelNotifier_Instance neopixels_var;
// Variables for the sessions of the instance
//Instance gwcmd
// Variables for the properties of the instance
struct GatewayCommandParser_Instance gwcmd_var;
// Variables for the sessions of the instance


// Enqueue of messages BLENotifierGW::neopixels::setRingColor
void enqueue_BLENotifierGW_send_neopixels_setRingColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter red
union u_red_t {
uint8_t p;
byte bytebuffer[1];
} u_red;
u_red.p = red;
_fifo_enqueue(u_red.bytebuffer[0] & 0xFF );

// parameter green
union u_green_t {
uint8_t p;
byte bytebuffer[1];
} u_green;
u_green.p = green;
_fifo_enqueue(u_green.bytebuffer[0] & 0xFF );

// parameter blue
union u_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_blue;
u_blue.p = blue;
_fifo_enqueue(u_blue.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::off
void enqueue_BLENotifierGW_send_neopixels_off(struct BLENotifierGW_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::pulse
void enqueue_BLENotifierGW_send_neopixels_pulse(struct BLENotifierGW_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::blink
void enqueue_BLENotifierGW_send_neopixels_blink(struct BLENotifierGW_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::setLogoColor
void enqueue_BLENotifierGW_send_neopixels_setLogoColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter red
union u_red_t {
uint8_t p;
byte bytebuffer[1];
} u_red;
u_red.p = red;
_fifo_enqueue(u_red.bytebuffer[0] & 0xFF );

// parameter green
union u_green_t {
uint8_t p;
byte bytebuffer[1];
} u_green;
u_green.p = green;
_fifo_enqueue(u_green.bytebuffer[0] & 0xFF );

// parameter blue
union u_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_blue;
u_blue.p = blue;
_fifo_enqueue(u_blue.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::breath
void enqueue_BLENotifierGW_send_neopixels_breath(struct BLENotifierGW_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::setColor
void enqueue_BLENotifierGW_send_neopixels_setColor(struct BLENotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter red
union u_red_t {
uint8_t p;
byte bytebuffer[1];
} u_red;
u_red.p = red;
_fifo_enqueue(u_red.bytebuffer[0] & 0xFF );

// parameter green
union u_green_t {
uint8_t p;
byte bytebuffer[1];
} u_green;
u_green.p = green;
_fifo_enqueue(u_green.bytebuffer[0] & 0xFF );

// parameter blue
union u_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_blue;
u_blue.p = blue;
_fifo_enqueue(u_blue.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::solid
void enqueue_BLENotifierGW_send_neopixels_solid(struct BLENotifierGW_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::rotate
void enqueue_BLENotifierGW_send_neopixels_rotate(struct BLENotifierGW_Instance *_instance, int8_t speed){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter speed
union u_speed_t {
int8_t p;
byte bytebuffer[1];
} u_speed;
u_speed.p = speed;
_fifo_enqueue(u_speed.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages BLENotifierGW::neopixels::blink_logo
void enqueue_BLENotifierGW_send_neopixels_blink_logo(struct BLENotifierGW_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages Serial::rx::receive_byte
void enqueue_Serial_send_rx_receive_byte(struct Serial_Instance *_instance, uint8_t b){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (13 >> 8) & 0xFF );
_fifo_enqueue( 13 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_rx >> 8) & 0xFF );
_fifo_enqueue( _instance->id_rx & 0xFF );

// parameter b
union u_b_t {
uint8_t p;
byte bytebuffer[1];
} u_b;
u_b.p = b;
_fifo_enqueue(u_b.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::measurement_stored
void enqueue_GatewayCommandParser_send_gateway_measurement_stored(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (14 >> 8) & 0xFF );
_fifo_enqueue( 14 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::bad_measurement
void enqueue_GatewayCommandParser_send_gateway_bad_measurement(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (15 >> 8) & 0xFF );
_fifo_enqueue( 15 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::request_measurement
void enqueue_GatewayCommandParser_send_gateway_request_measurement(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (16 >> 8) & 0xFF );
_fifo_enqueue( 16 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::cancel_request
void enqueue_GatewayCommandParser_send_gateway_cancel_request(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (17 >> 8) & 0xFF );
_fifo_enqueue( 17 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::set_base_color
void enqueue_GatewayCommandParser_send_gateway_set_base_color(struct GatewayCommandParser_Instance *_instance, uint8_t r, uint8_t g, uint8_t b){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (18 >> 8) & 0xFF );
_fifo_enqueue( 18 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );

// parameter r
union u_r_t {
uint8_t p;
byte bytebuffer[1];
} u_r;
u_r.p = r;
_fifo_enqueue(u_r.bytebuffer[0] & 0xFF );

// parameter g
union u_g_t {
uint8_t p;
byte bytebuffer[1];
} u_g;
u_g.p = g;
_fifo_enqueue(u_g.bytebuffer[0] & 0xFF );

// parameter b
union u_b_t {
uint8_t p;
byte bytebuffer[1];
} u_b;
u_b.p = b;
_fifo_enqueue(u_b.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::measurement_received
void enqueue_GatewayCommandParser_send_gateway_measurement_received(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (19 >> 8) & 0xFF );
_fifo_enqueue( 19 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}


//New dispatcher for messages
void dispatch_off(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_off(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_setRingColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_setRingColor(&neopixels_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_pulse(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_pulse(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_setLogoColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_setLogoColor(&neopixels_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_write_byte(uint16_t sender, uint8_t param_b) {
if (sender == gwcmd_var.id_bletx) {

}

}

void sync_dispatch_GatewayCommandParser_send_bletx_write_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b){
dispatch_write_byte(_instance->id_bletx, b);
}

//New dispatcher for messages
void dispatch_set_base_color(uint16_t sender, uint8_t param_r, uint8_t param_g, uint8_t param_b) {
if (sender == gwcmd_var.id_gateway) {
BLENotifierGW_handle_gateway_set_base_color(&notifier_var, param_r, param_g, param_b);

}

}


//New dispatcher for messages
void dispatch_blink(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_blink(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_request_measurement(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {
BLENotifierGW_handle_gateway_request_measurement(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_fps_clock(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
NeoPixelNotifier_handle_clock_fps_clock(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_breath(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_breath(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_solid(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_solid(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_print_message(uint16_t sender, char * param_msg) {
if (sender == gwcmd_var.id_bletx) {

}

}

void sync_dispatch_GatewayCommandParser_send_bletx_print_message(struct GatewayCommandParser_Instance *_instance, char * msg){
dispatch_print_message(_instance->id_bletx, msg);
}

//New dispatcher for messages
void dispatch_receive_byte(uint16_t sender, uint8_t param_b) {
if (sender == uart_var.id_rx) {
GatewayCommandParser_handle_blerx_receive_byte(&gwcmd_var, param_b);

}

}


//New dispatcher for messages
void dispatch_setColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_setColor(&neopixels_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_cancel_request(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {
BLENotifierGW_handle_gateway_cancel_request(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_measurement_received(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {

}

}


//New dispatcher for messages
void dispatch_rotate(uint16_t sender, int8_t param_speed) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_rotate(&neopixels_var, param_speed);

}

}


//New dispatcher for messages
void dispatch_measurement_stored(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {

}

}


//New dispatcher for messages
void dispatch_bad_measurement(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {

}

}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
BLENotifierGW_handle_clock_timer_timeout(&notifier_var, param_id);

}

}


//New dispatcher for messages
void dispatch_blink_logo(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_blink_logo(&neopixels_var);

}

}


int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 3:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setRingColor = 2;
union u_setRingColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_red;
u_setRingColor_red.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
union u_setRingColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_green;
u_setRingColor_green.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
union u_setRingColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_blue;
u_setRingColor_blue.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
dispatch_setRingColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setRingColor_red.p /* red */ ,
 u_setRingColor_green.p /* green */ ,
 u_setRingColor_blue.p /* blue */ );
break;
}
case 4:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_off = 2;
dispatch_off((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_pulse = 2;
dispatch_pulse((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 7:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setLogoColor = 2;
union u_setLogoColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_red;
u_setLogoColor_red.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
union u_setLogoColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_green;
u_setLogoColor_green.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
union u_setLogoColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_blue;
u_setLogoColor_blue.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
dispatch_setLogoColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setLogoColor_red.p /* red */ ,
 u_setLogoColor_green.p /* green */ ,
 u_setLogoColor_blue.p /* blue */ );
break;
}
case 13:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_receive_byte = 2;
union u_receive_byte_b_t {
uint8_t p;
byte bytebuffer[1];
} u_receive_byte_b;
u_receive_byte_b.bytebuffer[0] = mbuf[mbufi_receive_byte + 0];
mbufi_receive_byte += 1;
dispatch_receive_byte((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_receive_byte_b.p /* b */ );
break;
}
case 9:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setColor = 2;
union u_setColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_red;
u_setColor_red.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
union u_setColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_green;
u_setColor_green.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
union u_setColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_blue;
u_setColor_blue.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
dispatch_setColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setColor_red.p /* red */ ,
 u_setColor_green.p /* green */ ,
 u_setColor_blue.p /* blue */ );
break;
}
case 17:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_cancel_request = 2;
dispatch_cancel_request((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 18:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_set_base_color = 2;
union u_set_base_color_r_t {
uint8_t p;
byte bytebuffer[1];
} u_set_base_color_r;
u_set_base_color_r.bytebuffer[0] = mbuf[mbufi_set_base_color + 0];
mbufi_set_base_color += 1;
union u_set_base_color_g_t {
uint8_t p;
byte bytebuffer[1];
} u_set_base_color_g;
u_set_base_color_g.bytebuffer[0] = mbuf[mbufi_set_base_color + 0];
mbufi_set_base_color += 1;
union u_set_base_color_b_t {
uint8_t p;
byte bytebuffer[1];
} u_set_base_color_b;
u_set_base_color_b.bytebuffer[0] = mbuf[mbufi_set_base_color + 0];
mbufi_set_base_color += 1;
dispatch_set_base_color((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_set_base_color_r.p /* r */ ,
 u_set_base_color_g.p /* g */ ,
 u_set_base_color_b.p /* b */ );
break;
}
case 19:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_measurement_received = 2;
dispatch_measurement_received((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 11:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_rotate = 2;
union u_rotate_speed_t {
int8_t p;
byte bytebuffer[1];
} u_rotate_speed;
u_rotate_speed.bytebuffer[0] = mbuf[mbufi_rotate + 0];
mbufi_rotate += 1;
dispatch_rotate((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_rotate_speed.p /* speed */ );
break;
}
case 14:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_measurement_stored = 2;
dispatch_measurement_stored((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_blink = 2;
dispatch_blink((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 15:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_bad_measurement = 2;
dispatch_bad_measurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 16:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_request_measurement = 2;
dispatch_request_measurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_fps_clock = 2;
dispatch_fps_clock((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 8:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_breath = 2;
dispatch_breath((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 1:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_timer_timeout = 2;
union u_timer_timeout_id_t {
uint8_t p;
byte bytebuffer[1];
} u_timer_timeout_id;
u_timer_timeout_id.bytebuffer[0] = mbuf[mbufi_timer_timeout + 0];
mbufi_timer_timeout += 1;
dispatch_timer_timeout((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_timer_timeout_id.p /* id */ );
break;
}
case 10:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_solid = 2;
dispatch_solid((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 12:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_blink_logo = 2;
dispatch_blink_logo((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
}

void forward_BLENotifierGW_send_clock_timer_cancel(struct BLENotifierGW_Instance *_instance, uint8_t id){
if(_instance->id_clock == notifier_var.id_clock) {
forward_timer2_BLENotifierGW_send_clock_timer_cancel(_instance, id);
}
}
void forward_BLENotifierGW_send_clock_timer_start(struct BLENotifierGW_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_clock == notifier_var.id_clock) {
forward_timer2_BLENotifierGW_send_clock_timer_start(_instance, id, time);
}
}

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 2:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 1:
if(msgSize == 3) {
msgSizeOK = 1;}
break;
}

if(msgSizeOK == 1) {
if ( fifo_byte_available() > (msgSize + 2) ) {
	uint8_t i;
	for (i = 0; i < 2; i++) {
		_fifo_enqueue(msg[i]);
	}
	_fifo_enqueue((listener_id >> 8) & 0xFF);
	_fifo_enqueue(listener_id & 0xFF);
	for (i = 2; i < msgSize; i++) {
		_fifo_enqueue(msg[i]);
	}
}
}
}
}

void initialize_configuration_BLEThermoNotifier() {
// Initialize connectors
register_external_BLENotifierGW_send_clock_timer_start_listener(&forward_BLENotifierGW_send_clock_timer_start);
register_external_BLENotifierGW_send_clock_timer_cancel_listener(&forward_BLENotifierGW_send_clock_timer_cancel);
register_BLENotifierGW_send_neopixels_setColor_listener(&enqueue_BLENotifierGW_send_neopixels_setColor);
register_BLENotifierGW_send_neopixels_setLogoColor_listener(&enqueue_BLENotifierGW_send_neopixels_setLogoColor);
register_BLENotifierGW_send_neopixels_setRingColor_listener(&enqueue_BLENotifierGW_send_neopixels_setRingColor);
register_BLENotifierGW_send_neopixels_off_listener(&enqueue_BLENotifierGW_send_neopixels_off);
register_BLENotifierGW_send_neopixels_pulse_listener(&enqueue_BLENotifierGW_send_neopixels_pulse);
register_BLENotifierGW_send_neopixels_rotate_listener(&enqueue_BLENotifierGW_send_neopixels_rotate);
register_BLENotifierGW_send_neopixels_breath_listener(&enqueue_BLENotifierGW_send_neopixels_breath);
register_BLENotifierGW_send_neopixels_solid_listener(&enqueue_BLENotifierGW_send_neopixels_solid);
register_BLENotifierGW_send_neopixels_blink_listener(&enqueue_BLENotifierGW_send_neopixels_blink);
register_BLENotifierGW_send_neopixels_blink_logo_listener(&enqueue_BLENotifierGW_send_neopixels_blink_logo);
register_Serial_send_rx_receive_byte_listener(&enqueue_Serial_send_rx_receive_byte);
register_GatewayCommandParser_send_bletx_write_byte_listener(&sync_dispatch_GatewayCommandParser_send_bletx_write_byte);
register_GatewayCommandParser_send_bletx_print_message_listener(&sync_dispatch_GatewayCommandParser_send_bletx_print_message);
register_GatewayCommandParser_send_gateway_request_measurement_listener(&enqueue_GatewayCommandParser_send_gateway_request_measurement);
register_GatewayCommandParser_send_gateway_measurement_received_listener(&enqueue_GatewayCommandParser_send_gateway_measurement_received);
register_GatewayCommandParser_send_gateway_bad_measurement_listener(&enqueue_GatewayCommandParser_send_gateway_bad_measurement);
register_GatewayCommandParser_send_gateway_measurement_stored_listener(&enqueue_GatewayCommandParser_send_gateway_measurement_stored);
register_GatewayCommandParser_send_gateway_set_base_color_listener(&enqueue_GatewayCommandParser_send_gateway_set_base_color);
register_GatewayCommandParser_send_gateway_cancel_request_listener(&enqueue_GatewayCommandParser_send_gateway_cancel_request);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance neopixels
neopixels_var.active = true;
neopixels_var.id_ctrl = add_instance( (void*) &neopixels_var);
neopixels_var.id_clock = add_instance( (void*) &neopixels_var);
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE;
neopixels_var.NeoPixelNotifier_neopixel_logo_first_var = 3;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var = 0;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_PULSE_maxcount_var = 100;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_color_b_var = 0;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var = 0;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_maxcount_var = 22;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_l_color_b_var = 0;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var = 0;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var = 200;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_BLINKALL_maxcount_var = 22;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var = 0;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var = 186;
neopixels_var.NeoPixelNotifier_neopixel_total_count_var = 4;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var = 4;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_color_r_var = 100;
neopixels_var.NeoPixelNotifier_neopixel_ring_last_var = 2;
neopixels_var.NeoPixelNotifier_neopixel_ring_first_var = 0;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_l_color_r_var = 100;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_breath_speed_var = 100;
neopixels_var.NeoPixelNotifier_neopixel_logo_last_var = 3;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_l_color_g_var = 10;
neopixels_var.NeoPixelNotifier_neopixel_pin_var = 7;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_color_g_var = 10;
neopixels_var.NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = 0;
neopixels_var.NeoPixelNotifier_ring_brightness_divider_var = 1;

NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE, &neopixels_var);
// Init the ID, state variables and properties for instance uart
uart_var.active = true;
uart_var.id_rx = add_instance( (void*) &uart_var);
uart_var.id_tx = add_instance( (void*) &uart_var);
uart_var.Serial_SerialImpl_State = SERIAL_SERIALIMPL_RECEIVING_STATE;

Serial_SerialImpl_OnEntry(SERIAL_SERIALIMPL_STATE, &uart_var);
// Init the ID, state variables and properties for instance gwcmd
gwcmd_var.active = true;
gwcmd_var.id_blerx = add_instance( (void*) &gwcmd_var);
gwcmd_var.id_bletx = add_instance( (void*) &gwcmd_var);
gwcmd_var.id_gateway = add_instance( (void*) &gwcmd_var);
gwcmd_var.GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
gwcmd_var.GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var = array_gwcmd_GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var;
gwcmd_var.GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var_size = 2;

GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE, &gwcmd_var);
// Init the ID, state variables and properties for instance notifier
notifier_var.active = true;
notifier_var.id_gateway = add_instance( (void*) &notifier_var);
notifier_var.id_clock = add_instance( (void*) &notifier_var);
notifier_var.id_neopixels = add_instance( (void*) &notifier_var);
notifier_var.BLENotifierGW_BLENotifierSC_State = BLENOTIFIERGW_BLENOTIFIERSC_INIT_STATE;
notifier_var.BLENotifierGW_BLENotifierSC_OnCradle_State = BLENOTIFIERGW_BLENOTIFIERSC_ONCRADLE_STDBY_STATE;

BLENotifierGW_BLENotifierSC_OnEntry(BLENOTIFIERGW_BLENOTIFIERSC_STATE, &notifier_var);
}




void setup() {
initialize_configuration_BLEThermoNotifier();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener

Serial_handle_empty_event(&uart_var);

    processMessageQueue();
}
