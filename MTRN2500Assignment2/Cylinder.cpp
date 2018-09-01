

#include "Cylinder.hpp"
#include <cmath>
#include <iostream>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#elif defined(WIN32)
#include <Windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#endif

Cylinder::Cylinder(double radius, double depth, float red, float green, float blue) {
	radius = radius;
	z_len = depth;
	setColor(red, green, blue);
};

//Note: (x,y,z) is the centre of the prism
void Cylinder::draw() {
	//glPushMatrix();
	setColorInGL();
	positionInGL();

	
	

	//glPopMatrix();
};
