#ifndef _RADAR_EVENT_H_
#define _RADAR_EVENT_H_

/**
 * @file radar_event.h
 * @brief Radar sensor event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Radar event
 *
 * Event submitted when radar sensor detects motion or distance changes.
 */
struct radar_event {
	struct app_event_header header;
	uint16_t distance;
	uint8_t signal_strength;
};

APP_EVENT_TYPE_DECLARE(radar_event);

#ifdef __cplusplus
}
#endif

#endif /* _RADAR_EVENT_H_ */
