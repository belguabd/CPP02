#include "Fixed.hpp"

const int Fixed::fractional_Bits = 8;

Fixed::Fixed()
{
    this->rawValue = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->rawValue = copy.rawValue;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->rawValue = copy.rawValue;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->rawValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->rawValue = raw;
}