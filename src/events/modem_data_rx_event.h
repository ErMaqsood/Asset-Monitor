#ifndef _MODEM_DATA_RX_EVENT_H_
#define _MODEM_DATA_RX_EVENT_H_

/**
 * @file modem_data_rx_event.h
 * @brief Modem data receive event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Modem data RX event
 *
 * Event submitted when data is received from the modem/network.
 * Contains the received data and its length.
 */
struct modem_data_rx_event {
	struct app_event_header header;
	uint16_t data_len;
	uint8_t data[256];
};

APP_EVENT_TYPE_DECLARE(modem_data_rx_event);

#ifdef __cplusplus
}
#endif

#endif /* _MODEM_DATA_RX_EVENT_H_ */
