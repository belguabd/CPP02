#include "Point.hpp"

Point::Point() : x(0), y(0) {};

Point::Point(const Point &point) : x(point.x), y(point.y) {};

Point::Point(const float xCoordinate, const float yCoordinate): x(xCoordinate ) , y(yCoordinate){};

Point::~Point() {};