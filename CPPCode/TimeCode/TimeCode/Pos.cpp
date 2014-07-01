#include "Pos.h"

Pos::Pos() {
	x = 0;
	y = 0;
	z = 0;
}


Pos::Pos(double xLoc, double yLoc, double zLoc) {
	x = xLoc;
	y = yLoc;
	z = zLoc;
}

Pos::~Pos() {
}

void Pos::setX(double xLoc) {
	x = xLoc;
}

void Pos::setY(double yLoc) {
	y = yLoc;
}

void Pos::setZ(double zLoc) {
	z = zLoc;
}

double Pos::getX() {
	return x;
}

double Pos::getY() {
	return y;
}

double Pos::getZ() {
	return z;
}
