#pragma once

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    ~Point();
    Point(const Point &point);
    Point &operator=(const Point &); 
    
    Point(const float xCoordinate, const float yCoordinate);
   static bool bsp(Point const a, Point const b, Point const c, Point const point);
}; 