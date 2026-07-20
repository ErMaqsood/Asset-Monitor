#ifndef _NETWORK_RETRY_EVENT_H_
#define _NETWORK_RETRY_EVENT_H_

/**
 * @file network_retry_event.h
 * @brief Network retry event definition
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Network retry event
 *
 * Event submitted to retry network/modem connection after a failure.
 * Includes retry count and backoff strategy information.
 */
struct network_retry_event {
	struct app_event_header header;
	uint8_t retry_count;
	uint16_t backoff_ms;
};

APP_EVENT_TYPE_DECLARE(network_retry_event);

#ifdef __cplusplus
}
#endif

#endif /* _NETWORK_RETRY_EVENT_H_ */
