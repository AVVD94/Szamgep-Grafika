
#include "brick.h"

#include <stdio.h>

int main(int argc, char* argv[])
{

	Brick brick;
	double area;
	double surface;



	set_brick_data(&brick, 5, 15, 7);
	area = calc_brick_area(&brick);
    surface = calc_surface(&brick);

	printf("Cuboid area: %lf\n", area);
    printf("Cuboid surface: %lf\n", surface);

	return 0;
}

