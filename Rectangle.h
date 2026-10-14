#pragma once
#include "Polygon.h"

namespace myShapes
{
	// Calling it MyRectangle becuase Rectangle is taken by global namespace.
	class Rectangle : public Polygon
	{
	public:
		// There's a need only for the top left corner 
		Rectangle(const Point& a, double length, double width, const std::string& type, const std::string& name);
		~Rectangle() override;
		double getArea() const override;
		void draw(const Canvas& canvas) override;
		void clearDraw(const Canvas& canvas) override;

	};
}