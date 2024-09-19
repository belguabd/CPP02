#include <iostream>
#include <cmath>
class Fixed
{
private:
    int _value;
    static const int fractionalBits;

public:
    Fixed();
    Fixed &operator=(const Fixed &obj);
    Fixed(const Fixed &obj);
    ~Fixed();

    Fixed(const int _value);
    Fixed(const float floatingPoint);

    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);

    bool operator>(const Fixed &obj);
    bool operator<(const Fixed &obj);
    bool operator>=(const Fixed &obj);
    bool operator<=(const Fixed &obj);
    bool operator==(const Fixed &obj);
    bool operator!=(const Fixed &obj);

    Fixed operator+(const Fixed &obj);
    Fixed operator-(const Fixed &obj);
    Fixed operator*(const Fixed &obj);
    Fixed operator/(const Fixed &obj);

    Fixed &operator++();
    Fixed operator++(int);

    static Fixed &min( Fixed &fixedPoint ,  Fixed &  fixedPoint2);
    static const Fixed &min(const  Fixed &fixedPoint ,const  Fixed &  fixedPoint2);
    static Fixed &max( Fixed &fixedPoint ,  Fixed &  fixedPoint2);
    static const Fixed &max(const  Fixed &fixedPoint ,const  Fixed &  fixedPoint2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &f);