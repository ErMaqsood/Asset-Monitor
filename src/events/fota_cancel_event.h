#ifndef _FOTA_CANCEL_EVENT_H_
#define _FOTA_CANCEL_EVENT_H_

/**
 * @file fota_cancel_event.h
 * @brief FOTA cancel event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief FOTA cancel event
 *
 * Event submitted to cancel an ongoing or pending FOTA update.
 * Used when FOTA conditions are no longer met or user cancels the update.
 */
struct fota_cancel_event {
	struct app_event_header header;
	uint8_t cancel_reason;
};

APP_EVENT_TYPE_DECLARE(fota_cancel_event);

#ifdef __cplusplus
}
#endif

#endif /* _FOTA_CANCEL_EVENT_H_ */
