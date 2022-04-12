#include <iostream>
#include "Circle.h"
#include "Vector3.h"



int main()
{
    Circle c = Circle(4);
    c.print();
    std::cout << c.area() << std::endl;
    std::cout << c.circumference() << std::endl;

    Vector3 v = Vector3(1, 2, 3);
    Vector3 v2 = Vector3(2, 3, 1);
    v.print();
    std::cout << v.abs() << std::endl;
    v.normalized().print();
    std::cout << v.normalized().abs() << std::endl;
    v.sum(v2).print();
    v.scale(2);
    v.print();

}


