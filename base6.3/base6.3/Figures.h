#ifndef FIGURES_H
#define FIGURES_H

#include <iostream>

class Figure {
public:
    virtual void printInfo() = 0;
    virtual ~Figure() = default;
};


class Triangle : public Figure {
protected:
    double a, b, c;      
    double A, B, C;      
public:
    Triangle(double a, double b, double c, double A, double B, double C);

    void printInfo() override;
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B);

    void printInfo() override;
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B);

    void printInfo() override;
};

class EquilateralTriangle : public Triangle {
public:
    explicit EquilateralTriangle(double a);

    void printInfo() override;
};


class Quadrangle : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;
public:
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

    void printInfo() override;
};

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b);

    void printInfo() override;
};

class Square : public Quadrangle {
public:
    explicit Square(double a);

    void printInfo() override;
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double A, double B);

    void printInfo() override;
};

class Rhombus : public Quadrangle {
public:
    Rhombus(double a, double A, double B);

    void printInfo() override;
};

void print_info(Figure* fig);

#endif#pragma once
