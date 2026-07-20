#ifndef _SYSTEM_REBOOT_EVENT_H_
#define _SYSTEM_REBOOT_EVENT_H_

/**
 * @file system_reboot_event.h
 * @brief System reboot event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief System reboot event
 *
 * Event submitted to trigger a system reboot.
 * Used for firmware updates, recovery procedures, or system reset.
 */
struct system_reboot_event {
	struct app_event_header header;
	uint8_t reboot_type;
	uint32_t delay_ms;
};

APP_EVENT_TYPE_DECLARE(system_reboot_event);

#ifdef __cplusplus
}
#endif

#endif /* _SYSTEM_REBOOT_EVENT_H_ */
