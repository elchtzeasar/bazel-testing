/*
 *  Created on: Jan 27, 2018
 *      Author: Peter
 */

#include "ObjectComponent.h"

#include "ObjectContext.h"

ObjectComponent::ObjectComponent() : axes() {
    axes.push_back(new ObjectContext);
}

ObjectComponent::~ObjectComponent() {
}

void ObjectComponent::start() {
    for (auto object : axes) {
        object->start();
    }
}
