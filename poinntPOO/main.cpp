

#include <iostream>
#include "point.h"

int main()
{
    point p1("p1", 1, 2);
    p1.print();

    point p2("p2", -2, -3);
    p2.print();

    std::cout<<"Distance : "<< p1.distance(p2);
    std::cin.get();
}
 