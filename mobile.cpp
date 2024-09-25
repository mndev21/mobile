#include "mobile.hpp"

// iPhone class implementation
std::string iPhone::getMobileType() const {
    return "iPhone";
}

double iPhone::getPrice() const {
    return 1199.99; // Example price for iPhone
}

// Android class implementation
std::string Android::getMobileType() const {
    return "Android";
}

double Android::getPrice() const {
    return 899.99; // Example price for Android
}
