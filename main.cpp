#include <iostream>
#include "Point.h"
using namespace std;

int main() {

    Point p1(10.0f, 20.0f, 30.0f);
    Point p2(2.0f, 4.0f, 5.0f);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    cout << "(p1 + p2): " << p1 + p2 << endl;

    cout << "(p1 - p2): " << p1 - p2 << endl;

    cout << "(p1 * p2): " << p1 * p2 << endl;

    cout << "(p1 / p2): " << p1 / p2 << endl;


    Point p3(1.0f, 1.0f, 1.0f);
    cout << "p3: " << p3 << endl;

    p3 += 5.0f;
    cout << "(p3 += 5.0f): " << p3 << endl;

    p3 *= 2.0f;
    cout << "(p3 *= 2.0f): " << p3 << endl;

    p3 -= 1.0f;
    cout << "(p3 -= 1.0f): " << p3 << endl;

    p3 /= 0.5f;
    cout << "(p3 /= 0.5f): " << p3 << endl;

    return 0;
}
