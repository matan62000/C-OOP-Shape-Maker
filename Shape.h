#pragma once
#include "Point.h"
#include "Canvas.h"
#include <string>
using namespace std;

class Shape
{
public:
	Shape(const std::string& name, const std::string& type);
	void printDetails() const;
	string getType() const;
	string getName() const;
	virtual void move(const Point & other) = 0;
	virtual void draw(const Canvas& canvas) = 0;
	virtual void clearDraw(const Canvas& canvas) = 0;
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
	virtual ~Shape();
private:
	std::string _name;
	std::string _type;
};