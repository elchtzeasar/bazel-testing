/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#ifndef EVENTLOOP_H_
#define EVENTLOOP_H_

#include "libraries/base-messages/proto/src/main/protobuf/BaseMessages.pb.h"

#include <functional>
#include <vector>

class EventLoop {
public:
    static void subscribe(const std::function<void (const BaseMessage&)> handler);
    static void publish(const BaseMessage& message);

private:
    static std::vector< std::function<void (const BaseMessage&)> > handlers;
};

#endif /* EVENTLOOP_H_ */
