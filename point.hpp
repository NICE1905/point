#pragma once
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point();                     
    Point(double x, double y);     
    double getX() const;
    double getY() const;
    Point operator+(const Point& p) const;
    Point operator-(const Point& p) const;
    bool operator==(const Point& p) const;
    Point& operator=(const Point& p);
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    friend std::istream& operator>>(std::istream& is, Point& p);
};


