/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#ifndef OBJECTCONTEXT_H_
#define OBJECTCONTEXT_H_

#include "libraries/base-messages/proto/src/main/protobuf/BaseMessages.pb.h"

class ObjectContext {
public:
    ObjectContext();
    virtual ~ObjectContext();

    void start();

private:
    void send(const BaseMessage& msg);
    void handle(const BaseMessage& msg);
};

#endif /* OBJECTCONTEXT_H_ */
