#pragma once
#include "Range.h"

constexpr int CScreenPointMinX = 0;
constexpr int CScreenPointMaxX = 1919;
constexpr int CScreenPointMinY = 0;
constexpr int CScreenPointMaxY = 1079;

class CScreenPoint {
private:
	int x;
	int y;

public:
	explicit CScreenPoint(void);
	explicit CScreenPoint(const int x, const int y);

	const CScreenPoint operator=(const CScreenPoint& sp1) {
		this->x = sp1.x;
		this->y = sp1.y;
		return *this;
	}
	const CScreenPoint operator-(const CScreenPoint& sp1) const {
		return CScreenPoint(this->x - sp1.x, this->y - sp1.y);
	}
	const CScreenPoint operator-(const int sub) const {
		return CScreenPoint(this->x - sub, this->y - sub);
	}
	const CScreenPoint operator+(const CScreenPoint& sp1) const {
		return CScreenPoint(this->x + sp1.x, this->y + sp1.y);
	}
	const CScreenPoint operator+(const int add) const {
		return CScreenPoint(this->x + add, this->y + add);
	}
	const void operator-=(const CScreenPoint& sp1) {
		*this = *this - sp1;
	}
	const void operator-=(const int sub) {
		*this = *this - sub;
	}
	const void operator+=(const CScreenPoint& sp1) {
		*this = *this + sp1;
	}
	const void operator+=(const int add) {
		*this = *this + add;
	}

	void Display(void) const;

};



