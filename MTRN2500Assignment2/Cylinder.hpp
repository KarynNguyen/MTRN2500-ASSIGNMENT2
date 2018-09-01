#include "Shape.hpp"

//Absract Cylinder class derived from Shape

class Cylinder : public Shape
{
public:
	Cylinder(double radius, double depth, float red, float green, float blue);			//constructor

																						//dimensions of rectangular prism
	double radius;
	double z_len;

	//function to draw the cynlinder
	void draw();

};
