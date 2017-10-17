#include "stdafx.h"

#include <iostream>
#include <cmath>

#include "coordinate.h"

void Coordinate::SetX(double tx) {
	
	x = tx;

}

void Coordinate::SetY(double ty) {

	y = ty;

}

void Coordinate::Set(double tx, double ty) {

	SetX(tx);
	SetY(ty);

}

double Coordinate::GetX() {

	return x;
}

double Coordinate::GetY() {

	return y;
}

double Coordinate::GetDistance() {

	return std::sqrt(x*x + y*y);
}