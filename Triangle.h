#pragma once
#include "Polygon.h"
#include <string>
#include "Point.h"

class Triangle: public Polygon
{
private:
	string name;
	string type;
public:
	Triangle(const Point& a, const Point& b, const Point& c, const std::string& type, const std::string& name);
	~Triangle() override;
	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;
	double getArea() const override;

};