#include "brick.h"

#include <math.h>

void set_brick_data(Brick* brick, double x, double y, double z)
{
	brick->x = x;
	brick->y = y;
	brick->z = z;

}

double calc_brick_area(const Brick* brick)
{
	double area = brick->x * brick->y * brick->z;
	return area;
}

double calc_surface(const Brick* brick)
{
    double surface = 2*(brick->x * brick->y + brick->y * brick->z + brick->x * brick->z);
    return surface;
}
