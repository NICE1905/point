#include "Point.hpp"
#include <iostream>
Point::Point() {
    x = 0.0;
    y = 0.0;
}

// ================= cpp=================
Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}
double Point::getX() const {
    return x;
}
double Point::getY() const {
    return y;
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}
std::istream& operator>>(std::istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}
Point Point::operator+(const Point& p) const {
    return Point(x + p.x, y + p.y);
}
Point Point::operator-(const Point& p) const {
    return Point(x - p.x, y - p.y);
}
bool Point::operator==(const Point& p) const {
    return (x == p.x && y == p.y);
}
Point& Point::operator=(const Point& p) {
    if (this != &p) {
        x = p.x;
        y = p.y;
    }
    return *this;
}

