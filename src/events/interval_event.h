#ifndef _INTERVAL_EVENT_H_
#define _INTERVAL_EVENT_H_

/**
 * @file interval_event.h
 * @brief Interval sampling event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Interval event
 *
 * Event submitted at regular intervals to trigger sensor sampling.
 * Used for periodic data collection from all configured sensors.
 */
struct interval_event {
	struct app_event_header header;
	uint32_t interval_ms;
	uint8_t sample_count;
};

APP_EVENT_TYPE_DECLARE(interval_event);

#ifdef __cplusplus
}
#endif

#endif /* _INTERVAL_EVENT_H_ */
