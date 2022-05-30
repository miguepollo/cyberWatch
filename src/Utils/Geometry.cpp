#include "Geometry.h"

#include "config.h"
#include <math.h>
#include <LilyGoWatch.h>

void Geometry::calculatePointOnCircle(
	uint8_t x,
	uint8_t y,
	int16_t angle,
	uint8_t radius,
	int32_t &x1,
	int32_t &y1
) {
	int16_t derivatedAngle = angle - 90;
	float a = derivatedAngle * (M_PI / 180);
	x1 = x + (cos(a) * radius);
    y1 = y + (sin(a) * radius);
}
