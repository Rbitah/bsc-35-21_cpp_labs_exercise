#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
    length = 0.0f;
    width = 0.0f;
}

void Rectangle::setLength(float length) {
    this->length = length;
}

void Rectangle::setWidth(float width) {
    this->width = width;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}
