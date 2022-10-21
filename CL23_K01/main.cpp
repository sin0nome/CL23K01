#include "CScreenPoint.h"

int main(void) {
	CScreenPoint p1(1000, 1000);
	CScreenPoint p2(100, 200);
	CScreenPoint p3;

	p3.Display();

	p3 = p1 + p2;
	p3.Display();

	p3 = p3 + 100;
	p3.Display();

	p3 += 1000;
	p3.Display();

	p3 -= 100;
	p3.Display();

	p3 -= p1;
	p3.Display();

	p3 = p3 - p1;
	p3.Display();

	return 0;
}

