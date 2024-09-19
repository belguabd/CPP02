#include "Point.hpp"

float fobs(float value) { return (value < 0 ? -value : value); }

float getArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return (0.5 * fobs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    /* Using the formula: Area = 1/2 * | x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2) |*/

    float xA = a.x.toFloat();
    float yA = a.y.toFloat();
    float xB = b.x.toFloat();
    float yB = b.y.toFloat();
    float xC = c.x.toFloat();
    float yC = c.y.toFloat();
    float xP = point.x.toFloat();
    float yP = point.y.toFloat();

    float ACP = getArea(xA, yA, xC, yC, xP, yP);
    float ABP = getArea(xA, yA, xB, yB, xP, yP);
    float BCP = getArea(xB, yB, xC, yC, xP, yP);
    float ABC = getArea(xA, yA, xB, yB, xC, yC);

    if ((!ACP || !ABP || !BCP))
        return (false);
    return ((ACP + ABP + BCP == ABC));
}
