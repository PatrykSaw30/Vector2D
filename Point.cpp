#include "Point.h"
std::ostream& operator<<(std::ostream& os, const Point& obj) {
    os << "x:" << obj.x << ", y:" << obj.y << ", z:" << obj.z;
    return os;
}

Point operator+(Point obj, Point obj2) {
    Point result;
    result.x = obj.x + obj2.x;
    result.y = obj.y + obj2.y;
    result.z = obj.z + obj2.z;
    return result;
}

Point operator-(Point obj, Point obj2) {
    Point result;
    result.x = obj.x - obj2.x;
    result.y = obj.y - obj2.y;
    result.z = obj.z - obj2.z;
    return result;
}

Point operator/(Point obj, Point obj2) {
    Point result;
    result.x = obj.x / obj2.x;
    result.y = obj.y / obj2.y;
    result.z = obj.z / obj2.z;
    return result;
}

Point operator*(Point obj, Point obj2) {
    Point result;
    result.x = obj.x * obj2.x;
    result.y = obj.y * obj2.y;
    result.z = obj.z * obj2.z;
    return result;
}
