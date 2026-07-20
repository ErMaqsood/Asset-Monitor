#ifndef _MOTION_EVENT_H_
#define _MOTION_EVENT_H_

/**
 * @file motion_event.h
 * @brief Motion sensor event definition
 */

#include <app_event_manager.h>
#include <app_motion.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Motion event
 *
 * Event submitted when motion is detected by the motion sensor.
 */
struct motion_event {
	struct app_event_header header;
	struct app_motion_data motion_data;
};

APP_EVENT_TYPE_DECLARE(motion_event);

#ifdef __cplusplus
}
#endif

#endif /* _MOTION_EVENT_H_ */
