#ifndef CIRCLE_H
#define CIRCLE_H

typedef struct Brick
{
	double x;
	double y;
	double z;
} Brick;




void set_brick_data(Brick* brick, double x, double y, double z);



double calc_brick_area(const Brick* brick);
double calc_surface(const Brick* brick);

#endif
