#ifndef _SEND_DATA_TO_CLOUD_EVENT_H_
#define _SEND_DATA_TO_CLOUD_EVENT_H_

/**
 * @file send_data_to_cloud_event.h
 * @brief Send data to cloud event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Send data to cloud event
 *
 * Event submitted to trigger sending sensor data to the cloud.
 * Can be triggered by interval, user action, or data threshold.
 */
struct send_data_to_cloud_event {
	struct app_event_header header;
	uint8_t priority;
	bool bulk_send;
};

APP_EVENT_TYPE_DECLARE(send_data_to_cloud_event);

#ifdef __cplusplus
}
#endif

#endif /* _SEND_DATA_TO_CLOUD_EVENT_H_ */
