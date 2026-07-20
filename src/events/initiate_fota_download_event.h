#ifndef _INITIATE_FOTA_DOWNLOAD_EVENT_H_
#define _INITIATE_FOTA_DOWNLOAD_EVENT_H_

/**
 * @file initiate_fota_download_event.h
 * @brief Initiate FOTA download event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initiate FOTA download event
 *
 * Event submitted to initiate a firmware-over-the-air (FOTA) download.
 * Contains FOTA server configuration and version information.
 */
struct initiate_fota_download_event {
	struct app_event_header header;
	uint32_t expected_size;
	uint8_t host[128];
	uint8_t file_path[256];
	uint32_t timeout_ms;
};

APP_EVENT_TYPE_DECLARE(initiate_fota_download_event);

#ifdef __cplusplus
}
#endif

#endif /* _INITIATE_FOTA_DOWNLOAD_EVENT_H_ */
