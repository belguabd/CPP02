#include <cmath>
#include <iostream>
class Fixed
{
private:
    int _value;
    static const int fractionalBits;

public:
    int toInt(void) const;
    float toFloat(void) const;
    Fixed(const int _value);
    Fixed(const float floatingPoint);

    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);
    ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &copy);