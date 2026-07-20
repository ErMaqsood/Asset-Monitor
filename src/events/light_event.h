#ifndef _LIGHT_EVENT_H_
#define _LIGHT_EVENT_H_

/**
 * @file light_event.h
 * @brief Light sensor event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Light event
 *
 * Event submitted when light level is detected by the light sensor.
 */
struct light_event {
	struct app_event_header header;
	uint16_t light_level;
};

APP_EVENT_TYPE_DECLARE(light_event);

#ifdef __cplusplus
}
#endif

#endif /* _LIGHT_EVENT_H_ */
