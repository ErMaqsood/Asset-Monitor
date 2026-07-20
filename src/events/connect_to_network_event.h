#ifndef _CONNECT_TO_NETWORK_EVENT_H_
#define _CONNECT_TO_NETWORK_EVENT_H_

/**
 * @file connect_to_network_event.h
 * @brief Connect to network event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Connect to network event
 *
 * Event submitted to initiate network/modem connection.
 * Triggers the modem initialization and network setup sequence.
 */
struct connect_to_network_event {
	struct app_event_header header;
	uint8_t connection_type;
	bool force_reconnect;
};

APP_EVENT_TYPE_DECLARE(connect_to_network_event);

#ifdef __cplusplus
}
#endif

#endif /* _CONNECT_TO_NETWORK_EVENT_H_ */
