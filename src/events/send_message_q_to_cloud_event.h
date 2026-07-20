#ifndef _SEND_MESSAGE_Q_TO_CLOUD_EVENT_H_
#define _SEND_MESSAGE_Q_TO_CLOUD_EVENT_H_

/**
 * @file send_message_q_to_cloud_event.h
 * @brief Send message queue to cloud event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Send message queue to cloud event
 *
 * Event submitted to send queued messages to the cloud.
 * Processes all buffered messages in the message queue.
 */
struct send_message_q_to_cloud_event {
	struct app_event_header header;
	uint16_t queue_size;
	uint8_t priority;
	bool force_send;
};

APP_EVENT_TYPE_DECLARE(send_message_q_to_cloud_event);

#ifdef __cplusplus
}
#endif

#endif /* _SEND_MESSAGE_Q_TO_CLOUD_EVENT_H_ */
