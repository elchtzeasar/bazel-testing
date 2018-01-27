/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#ifndef AXISCOMPONENT_H_
#define AXISCOMPONENT_H_

#include <vector>

class AxisContext;

class AxisComponent {
public:
    AxisComponent();
    virtual ~AxisComponent();

    void start();

private:
    std::vector<AxisContext*> axes;
};

#endif /* AXISCOMPONENT_H_ */
