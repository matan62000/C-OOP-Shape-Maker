#pragma once

#include "Shape.h"
#include "Point.h"
#define PI 3.14

class Circle : public Shape
{
public:
	Circle(const Point& center, double radius, const std::string& type, const std::string& name);
	~Circle() override;

	const Point& getCenter() const;
	double getRadius() const;
	double getArea() const override;
	double getPerimeter() const override;
	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;
	void move(const Point& other) override;


private:
	Point _center;
	double _radius;
};