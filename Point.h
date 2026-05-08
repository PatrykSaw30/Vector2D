#ifndef OPERATORS_POINT_H
#define OPERATORS_POINT_H

#include <ostream>

class Point{
    float x = 0;
    float y = 0;
public:
    float z = 0;
    Point() :
            x(0),
            y(0),
            z(0) {};

    Point(float newX, float newY, float newZ) :
            x(newX),
            y(newY),
            z(newZ) {};

    friend  std::ostream& operator<<(std::ostream& os, const Point& obj);

    void operator*=(Point obj) {
        this->x *= obj.x;
        this->y *= obj.y;
        this->z *= obj.z;
    }

    void operator/=(Point obj){
        this->x /= obj.x;
        this->y /= obj.y;
        this->z /= obj.z;
    }

    void operator+=(Point obj){
        this->x += obj.x;
        this->y += obj.y;
        this->z += obj.z;
    }

    void operator-=(Point obj){
        this->x -= obj.x;
        this->y -= obj.y;
        this->z -= obj.z;
    }

    void operator*=(float x) {
        this->x *= x;
        this->y *= x;
        this->z *= x;
    }

    void operator/=(float x){
        this->x /= x;
        this->y /= x;
        this->z /= x;
    }

    void operator+=(float x){
        this->x += x;
        this->y += x;
        this->z += x;
    }

    void operator-=(float x){
        this->x -= x;
        this->y -= x;
        this->z -= x;
    }

    friend Point operator+(Point obj, Point obj2);
    friend Point operator-(Point obj, Point obj2);
    friend Point operator*(Point obj, Point obj2);
    friend Point operator/(Point obj, Point obj2);
};

#endif //OPERATORS_POINT_H
