#include "CScreenPoint.h"
#include <iostream>

CScreenPoint::CScreenPoint(void) {
	this->x = 0;
	this->y = 0;
}

CScreenPoint::CScreenPoint(const int x, const int y) {
	this->x = Range(x, CScreenPointMinX, CScreenPointMaxX);
	this->y = Range(y, CScreenPointMinY, CScreenPointMaxY);
}

void CScreenPoint::Display(void) const {
	std::cout << "x = " << this->x << ",y = " << this->y << std::endl;
}

