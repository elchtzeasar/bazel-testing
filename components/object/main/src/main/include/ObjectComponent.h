/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#ifndef OBJECTCOMPONENT_H_
#define OBJECTCOMPONENT_H_

#include <vector>

class ObjectContext;

class ObjectComponent {
public:
    ObjectComponent();
    virtual ~ObjectComponent();

    void start();

private:
    std::vector<ObjectContext*> axes;
};

#endif /* OBJECTCOMPONENT_H_ */
