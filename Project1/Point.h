#pragma once
#include <iostream>
using namespace std;
class Point 
{
    int x;
    int y;
public:
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    Point operator+(const Point& other) const
    {
        return Point(x + other.x, y + other.y);
    }

    Point operator-(const Point& other) const 
    {
        return Point(x - other.x, y - other.y);
    }

    Point operator*(const Point& other) const 
    {
        return Point(x * other.x, y * other.y);
    }

    Point operator/(const Point& other) const 
    {
        return Point(x / other.x, y / other.y);
    }

    friend ostream& operator<<(ostream& out, const Point& point)
    {
        out << "(" << point.x << ", " << point.y << ")";
        return out;
    }

    friend istream& operator>>(istream& in, Point& point) 
    {
        cout << "¬ведите x: ";
        in >> point.x;
        cout << "¬ведите y: ";
        in >> point.y;
        return in;
    }
};
