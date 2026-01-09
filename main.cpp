#include <iostream>
#include "Point.cpp"

int main() {
    Point p1;              
    Point p2(2.5, 7.0);    

    std::cout << "Saisir un point (x y) : ";
    std::cin >> p1;

    std::cout << "p1 = " << p1 << std::endl;
    std::cout << "p2 = " << p2 << std::endl;

    Point somme = p1 + p2;
    Point difference = p1 - p2;

    std::cout << "p1 + p2 = " << somme << std::endl;
    std::cout << "p1 - p2 = " << difference << std::endl;

    if (p1 == p2) {
        std::cout << "p1 et p2 sont egaux" << std::endl;
    } else {
        std::cout << "p1 et p2 sont differents" << std::endl;
    }

    Point p3;
    p3 = p2;   
    std::cout << "p3 apres affectation = p2 : " << p3 << std::endl;

    p3 = p3;  

    return 0;
}
