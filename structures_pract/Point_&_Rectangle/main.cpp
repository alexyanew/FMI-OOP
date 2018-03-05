#include<iostream>

#include"Rectangle.h" //will include Point.h


int main() {

	Rect r;

	readRect(r);

	printRect(r);

	Point p1 = { 6, 8 };
	Rect r1 = { 5, 5, 10, 10 };

	if (isInside(p1, r1)) {

		std::cout << "\npoint p1 with coordinates : ";
		printPnt(p1);
		std::cout << "is in R1!\n";
	}

	Rect r2 = { 7, 7, 15, 15 };

	if (areInCollision(r1, r2))
		std::cout << "R1 and R2 collision detected!\n";

		return 0;
}