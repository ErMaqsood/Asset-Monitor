#ifndef _GO_TO_SLEEP_WITH_WAKE_UP_EVENT_H_
#define _GO_TO_SLEEP_WITH_WAKE_UP_EVENT_H_

/**
 * @file go_to_sleep_with_wake_up_event.h
 * @brief Go to sleep with wake up event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Go to sleep with wake up event
 *
 * Event submitted to put the device into sleep mode with capability to wake up
 * on modem events, motion, or other wake-up sources.
 * Device will reboot on next wakeup.
 */
struct go_to_sleep_with_wake_up_event {
	struct app_event_header header;
	uint8_t wake_up_source;
	uint32_t sleep_duration_ms;
	bool reboot_on_wakeup;
};

APP_EVENT_TYPE_DECLARE(go_to_sleep_with_wake_up_event);

#ifdef __cplusplus
}
#endif

#endif /* _GO_TO_SLEEP_WITH_WAKE_UP_EVENT_H_ */
