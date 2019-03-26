// 
// Created by Siarhei Drozd
// 

#ifndef CLASSPOINT_H
#define CLASSPOINT_H
#include <iostream>
using namespace std;
class Point {
    public:
    int x, y, z;
    Point *prev;
    Point operator + (const Point& point);
    Point &operator += (const Point& point);
    Point operator - (const Point& point);
    Point &operator -= (const Point& point);
    bool operator == (const Point& point);
    bool operator != (const Point& point);
    friend
        ostream& operator<<(ostream& output, const Point& point) {
        return output << "(" << point.x << "," << point.y << "," << point.z << ")" << std::endl;
    }
};

#endif
