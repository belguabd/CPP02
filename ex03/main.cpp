
#include "Point.hpp"

int main()
{
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);
    Point p(0.1f, 0.002f);

    if (Point::bsp(a, b, c, p))
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    return 0;
}