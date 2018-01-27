/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#include "AxisContext.h"

#include "EventLoop.h"

#include <functional>
#include <google/protobuf/text_format.h>
#include <iostream>

using ::std::bind;
using ::std::cout;
using ::std::endl;
using ::std::placeholders::_1;
using ::std::string;

AxisContext::AxisContext() {
    EventLoop::subscribe(bind(&AxisContext::handle, this, _1));
}

AxisContext::~AxisContext() {
}

void AxisContext::start() {

}

inline
string toString(const BaseMessage& msg) {
    string desc;
    google::protobuf::TextFormat::Printer printer;
    printer.PrintToString(msg, &desc);

    return desc;
}

void AxisContext::send(const BaseMessage& msg) {
    cout << "sending msg=" << toString(msg) << endl;
    EventLoop::publish(msg);
}

void AxisContext::handle(const BaseMessage& msg) {
    cout << "handle msg=" << toString(msg) << endl;
}
