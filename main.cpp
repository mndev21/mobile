#include <iostream>
#include "mobile.hpp"

int main() {
    Mobile* phone1 = new iPhone();
    Mobile* phone2 = new Android();

    std::cout << "Phone 1: " << phone1->getMobileType() << ", Price: $" << phone1->getPrice() << std::endl;
    std::cout << "Phone 2: " << phone2->getMobileType() << ", Price: $" << phone2->getPrice() << std::endl;

    delete phone1;
    delete phone2;

    return 0;
}
