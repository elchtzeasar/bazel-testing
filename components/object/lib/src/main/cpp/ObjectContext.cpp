/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#include "ObjectContext.h"

#include "EventLoop.h"
#include "libraries/axis-messages/proto/src/main/protobuf/AxisMessages.pb.h"

#include <functional>
#include <google/protobuf/text_format.h>
#include <iostream>

using ::std::bind;
using ::std::cout;
using ::std::endl;
using ::std::placeholders::_1;
using ::std::string;

ObjectContext::ObjectContext() {
    EventLoop::subscribe(bind(&ObjectContext::handle, this, _1));
}

ObjectContext::~ObjectContext() {
}

void ObjectContext::start() {
    BaseMessage message;
    AxisMessage& axisMessage = *message.MutableExtension(axis_message);
    axisMessage.set_value(123);

    send(message);
}

inline
string toString(const BaseMessage& msg) {
    string desc;
    google::protobuf::TextFormat::Printer printer;
    printer.PrintToString(msg, &desc);

    return desc;
}

void ObjectContext::send(const BaseMessage& msg) {
    cout << "sending msg=" << toString(msg) << endl;
    EventLoop::publish(msg);
}

void ObjectContext::handle(const BaseMessage& msg) {
    cout << "handle msg=" << toString(msg) << endl;
}
