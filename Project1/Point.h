#pragma once
#include <iostream>
using namespace std;

class Point {
    double x, y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

    friend istream& operator>>(istream& is, Point& p)
    {
        is >> p.x >> p.y;
        return is;
    }

    friend ostream& operator<<(ostream& os, const Point& p)
    {
        os << "(" << p.x << ", " << p.y << ")";

        return os;
    }

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
        if (other.x == 0 || other.y == 0) {
            cout << "Error: division by zero!" << endl;
            exit(1);
        }
        return Point(x / other.x, y / other.y);
    }

   
};