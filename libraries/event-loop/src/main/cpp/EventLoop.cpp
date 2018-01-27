/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#include "EventLoop.h"

using ::std::vector;
using ::std::function;

void EventLoop::subscribe(const function<void (const BaseMessage&)> handler) {
    handlers.push_back(handler);
}

void EventLoop::publish(const BaseMessage& message) {
    for (const auto& handler : handlers) {
        handler(message);
    }
}

vector< function<void (const BaseMessage&)> > EventLoop::handlers;
