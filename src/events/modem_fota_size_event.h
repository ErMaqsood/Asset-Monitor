#ifndef _MODEM_FOTA_SIZE_EVENT_H_
#define _MODEM_FOTA_SIZE_EVENT_H_

/**
 * @file modem_fota_size_event.h
 * @brief Modem FOTA size event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Modem FOTA size event
 *
 * Event submitted when FOTA package size information is received from modem.
 * Used to validate available storage before starting FOTA download.
 */
struct modem_fota_size_event {
	struct app_event_header header;
	uint32_t fota_size;
	uint32_t available_storage;
	uint8_t result_code;
};

APP_EVENT_TYPE_DECLARE(modem_fota_size_event);

#ifdef __cplusplus
}
#endif

#endif /* _MODEM_FOTA_SIZE_EVENT_H_ */
