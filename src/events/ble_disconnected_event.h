#ifndef _BLE_DISCONNECTED_EVENT_H_
#define _BLE_DISCONNECTED_EVENT_H_

/**
 * @file ble_disconnected_event.h
 * @brief BLE disconnected event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief BLE disconnected event
 *
 * Event submitted when a BLE device disconnects from the application.
 * Contains the connection handle and disconnect reason.
 */
struct ble_disconnected_event {
	struct app_event_header header;
	uint8_t conn_handle;
	uint8_t reason;
};

APP_EVENT_TYPE_DECLARE(ble_disconnected_event);

#ifdef __cplusplus
}
#endif

#endif /* _BLE_DISCONNECTED_EVENT_H_ */
