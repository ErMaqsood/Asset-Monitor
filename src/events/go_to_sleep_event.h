#ifndef _GO_TO_SLEEP_EVENT_H_
#define _GO_TO_SLEEP_EVENT_H_

/**
 * @file go_to_sleep_event.h
 * @brief Go to sleep event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Go to sleep event
 *
 * Event submitted to put the device into sleep/low-power mode.
 * Does not wake up on modem events (pure sleep mode).
 */
struct go_to_sleep_event {
	struct app_event_header header;
	uint8_t sleep_type;
	uint32_t sleep_duration_ms;
};

APP_EVENT_TYPE_DECLARE(go_to_sleep_event);

#ifdef __cplusplus
}
#endif

#endif /* _GO_TO_SLEEP_EVENT_H_ */
