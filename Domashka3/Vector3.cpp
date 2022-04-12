#include "Vector3.h"

double Vector3::abs()
{
    return sqrt(x*x+y*y+z*z);
}

Vector3 Vector3::sum(Vector3 v2)
{
    return Vector3(x+v2.x,y+v2.y,z+v2.z);
}

Vector3 Vector3::normalized()
{
    double absV = abs();
    return Vector3(x/absV,y/absV,z/absV);
}

void Vector3::scale(double k)
{
    x *= k;
    y *= k;
    z *= k;
}

void Vector3::print()
{
    std::cout << "Vector3(" << x << ", " << y << ", " << z << ")\n";
}
