// 
// Created by Siarhei Drozd
// 

#include <iostream>
#include "ClassPoint.h"
#include "ClassStack.h"

Point Point::operator + (const Point& point) {
    Point temp;
    temp.x = this -> x + point.x;
    temp.y = this -> y + point.y;
    temp.z = this -> z + point.z;
    return temp;
}

Point Point::operator - (const Point& point) {
    Point temp;
    temp.x = this -> x - point.x;
    temp.y = this -> y - point.y;
    temp.z = this -> z - point.z;
    return temp;
}

Point &Point::operator -= (const Point& point) {
    
    this -> x = this -> x - point.x;
    this -> y = this -> y - point.y;
    this -> z = this -> z - point.z;
    return *this;
}

Point &Point::operator += (const Point& point) {
    
    this -> x = this -> x + point.x;
    this -> y = this -> y + point.y;
    this -> z = this -> z + point.z;
    return *this;
}

bool Point::operator== (const Point& point) {
    if ( this-> x == point.x && this-> y == point.y && this-> z == point.z )
    return true;
    else return false;
}

bool Point::operator!= (const Point& point) {
    if ( this-> x != point.x || this-> y != point.y || this-> z != point.z )
    return true;
    else return false;
}

