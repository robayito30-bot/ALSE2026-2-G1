#include "sphere.hpp"
#include <cmath>


Sphere::Sphere() {
    radius = 0.0;
}


Sphere::Sphere(double r) {
    radius = r;
}

Sphere::~Sphere() {}

// Método para obtener el radio
double Sphere::getRadius() const {
    return radius;
}

// Método para modificar el radio
void Sphere::setRadius(double r) { radius = r;
}

// Método para calcular el volumen: (4/3) * pi * r^3
double Sphere::getVolume() const {
    return (4.0 / 3.0) * M_PI * std::pow(radius, 3);
}

// Método para calcular el área superficial: 4 * pi * r^2
double Sphere::getArea() const {
    return 4.0 * M_PI * std::pow(radius, 2);
}
