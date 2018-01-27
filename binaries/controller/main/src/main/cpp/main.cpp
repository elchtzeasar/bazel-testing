/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#include <iostream>

#include "AxisComponent.h"
#include "ObjectComponent.h"

using ::std::cout;
using ::std::endl;

int main() {
    cout << "Starting" << endl;

    AxisComponent axisComponent;
    ObjectComponent objectComponent;

    objectComponent.start();
    axisComponent.start();

    return 0;
}
