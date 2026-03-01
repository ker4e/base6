#include "Figures.h"


// Triangle

Triangle::Triangle(double a, double b, double c, double A, double B, double C) 
    : a(a), b(b), c(c), A(A), B(B), C(C) { }

void Triangle::printInfo() {
    std::cout << "Triangle\n";
    std::cout << "Sides: " << a << " " << b << " " << c << "\n";
    std::cout << "Angles: " << A << " " << B << " " << C << "\n\n";
}


// RightTriangle

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90) { }

void RightTriangle::printInfo() {
    std::cout << "Right triangle\n";
    std::cout << "Sides: " << a << " " << b << " " << c << "\n";
    std::cout << "Angles: " << A << " " << B << " 90\n\n";
}


// IsoscelesTriangle

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A) { }

void IsoscelesTriangle::printInfo() {
    std::cout << "Isosceles triangle\n";
    std::cout << "Sides: " << a << " " << b << " " << a << "\n";
    std::cout << "Angles: " << A << " " << B << " " << A << "\n\n";
}


// EquilateralTriangle

EquilateralTriangle::EquilateralTriangle(double a)
    : Triangle(a, a, a, 60, 60, 60) { }

void EquilateralTriangle::printInfo() {
    std::cout << "Equilateral triangle\n";
    std::cout << "Sides: " << a << " " << a << " " << a << "\n";
    std::cout << "Angles: 60 60 60\n\n";
}


// Quadrangle

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) { }

void Quadrangle::printInfo() {
    std::cout << "Quadrangle\n";
    std::cout << "Sides: " << a << " " << b << " " << c << " " << d << "\n";
    std::cout << "Angles: " << A << " " << B << " " << C << " " << D << "\n\n";
}


// Rectangle

Rectangle::Rectangle(double a, double b)
    : Quadrangle(a, b, a, b, 90, 90, 90, 90) { }

void Rectangle::printInfo() {
    std::cout << "Rectangle\n";
    std::cout << "Sides: " << a << " " << b << " " << a << " " << b << "\n";
    std::cout << "Angles: 90 90 90 90\n\n";
}


// Square

Square::Square(double a)
    : Quadrangle(a, a, a, a, 90, 90, 90, 90) { }

void Square::printInfo() {
    std::cout << "Square\n";
    std::cout << "Sides: " << a << " " << a << " " << a << " " << a << "\n";
    std::cout << "Angles: 90 90 90 90\n\n";
}


// Parallelogram

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrangle(a, b, a, b, A, B, A, B) { }

void Parallelogram::printInfo() {
    std::cout << "Parallelogram\n";
    std::cout << "Sides: " << a << " " << b << " " << a << " " << b << "\n";
    std::cout << "Angles: " << A << " " << B << " " << A << " " << B << "\n\n";
}


// Rhombus

Rhombus::Rhombus(double a, double A, double B)
    : Quadrangle(a, a, a, a, A, B, A, B) { }

void Rhombus::printInfo() {
    std::cout << "Rhombus\n";
    std::cout << "Sides: " << a << " " << a << " " << a << " " << a << "\n";
    std::cout << "Angles: " << A << " " << B << " " << A << " " << B << "\n\n";
}


void print_info(Figure* fig) {
    fig->printInfo();
}