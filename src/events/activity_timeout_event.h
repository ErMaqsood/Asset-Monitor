#ifndef _ACTIVITY_TIMEOUT_EVENT_H_
#define _ACTIVITY_TIMEOUT_EVENT_H_

/**
 * @file activity_timeout_event.h
 * @brief Activity timeout event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Activity timeout event
 *
 * Event submitted when the device has been inactive for a specified period.
 * Used to trigger periodic checks or power management operations.
 */
struct activity_timeout_event {
	struct app_event_header header;
	uint32_t timeout_ms;
	uint8_t activity_type;
};

APP_EVENT_TYPE_DECLARE(activity_timeout_event);

#ifdef __cplusplus
}
#endif

#endif /* _ACTIVITY_TIMEOUT_EVENT_H_ */
