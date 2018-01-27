/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#ifndef AXISCONTEXT_H_
#define AXISCONTEXT_H_

#include "libraries/base-messages/proto/src/main/protobuf/BaseMessages.pb.h"

class AxisContext {
public:
    AxisContext();
    virtual ~AxisContext();

    void start();

private:
    void send(const BaseMessage& msg);
    void handle(const BaseMessage& msg);
};

#endif /* AXISCONTEXT_H_ */
