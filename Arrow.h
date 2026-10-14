#pragma once
#include "Polygon.h"

class Arrow: public Shape
{
public:
	Arrow(const Point& a, const Point& b, const std::string& type, const std::string& name);
	~Arrow() override;
	void move(const Point & other) override;
	double getPerimeter() const override;
	double getArea() const override;
	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;
private:
	std::vector<Point> _points;
};

