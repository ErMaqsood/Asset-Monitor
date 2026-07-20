#ifndef _BLE_CONNECTED_EVENT_H_
#define _BLE_CONNECTED_EVENT_H_

/**
 * @file ble_connected_event.h
 * @brief BLE connected event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief BLE connected event
 *
 * Event submitted when a BLE device connects to the application.
 * Contains connection parameters and peer address information.
 */
struct ble_connected_event {
	struct app_event_header header;
	uint8_t conn_handle;
	uint8_t peer_addr[6];
	int8_t rssi;
};

APP_EVENT_TYPE_DECLARE(ble_connected_event);

#ifdef __cplusplus
}
#endif

#endif /* _BLE_CONNECTED_EVENT_H_ */
