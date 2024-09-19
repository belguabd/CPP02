
#include "Point.hpp"

int main(void)
{

    Point a(2, 2.5);
    Point b(-2.5, 8.25);
    Point c(-0.5, 8.5);
    Point point(0, 0);
    if(bsp(a, b, c, point))
        std::cout << "Point is inside the triangle\n";
    else
        std::cout << "Point is outside the triangle\n";

    return 0;
}