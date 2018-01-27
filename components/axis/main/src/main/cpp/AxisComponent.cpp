/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#include "AxisComponent.h"

#include "AxisContext.h"

AxisComponent::AxisComponent() : axes() {
    axes.push_back(new AxisContext);
}

AxisComponent::~AxisComponent() {
}

void AxisComponent::start() {
    for (auto axis : axes) {
        axis->start();
    }
}
