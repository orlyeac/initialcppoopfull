#include "rotatable.h"

Rotatable::Rotatable() {
    this->angle = new double(0);
}

Rotatable::Rotatable(double angle) {
    this->angle = new double(angle);
}

Rotatable::Rotatable(const Rotatable & rotatable) {
    this->angle = new double(*(rotatable.angle));
}

Rotatable::Rotatable(Rotatable && rotatable) {
    this->angle = rotatable.angle;
    rotatable.angle = nullptr;
}

Rotatable::~Rotatable() {
    delete this->angle;
}

void Rotatable::setangle(double angle) {
    *(this->angle) = angle;
}

double Rotatable::getangle() const {
    return *(this->angle);
}

Rotatable & Rotatable::operator=(const Rotatable & rotatable) {
    double * tmp = new double(*(rotatable.angle));
    delete this->angle;
    this->angle = tmp;
    return *this;
}

Rotatable & Rotatable::operator=(Rotatable && rotatable) {
    if (this != &rotatable) {
        double * tmp = this->angle;
        this->angle = rotatable.angle;
        rotatable.angle = tmp;
    }
    return *this;
}
