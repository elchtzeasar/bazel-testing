/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#include "EventLoop.h"

#include <gtest/gtest.h>

const BaseMessage* receivedMsg = NULL;

void handle(const BaseMessage& message) {
    receivedMsg = &message;
}

TEST(EventLoopTest, shouldForwardMessages) {
    EventLoop ev;
    BaseMessage message;

    ev.subscribe(&handle);

    ASSERT_NE(&message, receivedMsg);

    ev.publish(message);

    ASSERT_EQ(&message, receivedMsg);
}
