#include <iostream>
#include "vector.h"



int main(){
    Vector a(2), b(2), c(3);
    a.SetElement(0, 1);
    a.SetElement(1, 9);

    b.SetElement(0, -1);
    b.SetElement(1, 4);
    
    c.SetElement(0, 3);
    c.SetElement(1, 0);
    c.SetElement(2, -1);

    std::cout << a.ToString() << std::endl;
    std::cout << b.ToString() << std::endl;
    std::cout << c.ToString() << std::endl;

    Vector x = a.Sum(b);
    std::cout << x.ToString() << std::endl;

    return 0;
}