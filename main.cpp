#include <iostream>
#include "mobile.hpp"

int main() {
    // Pointers to base class Mobile
    Mobile* phone1 = new iPhone();
    Mobile* phone2 = new Android();

    // Access derived class methods through base class pointer
    std::cout << "Phone 1: " << phone1->getMobileType() << ", Price: $" << phone1->getPrice() << std::endl;
    std::cout << "Phone 2: " << phone2->getMobileType() << ", Price: $" << phone2->getPrice() << std::endl;

    // Clean up
    delete phone1;
    delete phone2;

    return 0;
}
