#pragma once

#include "Shape.h"
#include "Point.h"
#include <vector>

class Polygon: public Shape
{
public:
	Polygon(const std::string& type, const std::string& name);
	~Polygon() override;
	void move(const Point& other) override;
	double getPerimeter() const override;


protected:
	std::vector<Point> _points;
};