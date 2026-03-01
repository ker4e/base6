#include <iostream>
#include "Figures.h"

int main() {
	Triangle triangle(3, 4, 5, 50, 60, 70);
	RightTriangle rightT(3, 4, 5, 30, 60);
	IsoscelesTriangle isoscelesT(5, 6, 50, 80);
	EquilateralTriangle equilateralT(5);

	Rectangle rectangle(4, 6);
	Square square(5);
	Parallelogram parallelogram(4, 6, 60, 120);
	Rhombus rombus(5, 70, 110);

	print_info(&triangle);
	print_info(&rightT);
	print_info(&isoscelesT);
	print_info(&equilateralT);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rombus);

	return EXIT_SUCCESS;
}
