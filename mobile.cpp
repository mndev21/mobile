#include "mobile.hpp"

std::string iPhone::getMobileType() const {
    return "iPhone";
}

double iPhone::getPrice() const {
    return 1199.99;
}

std::string Android::getMobileType() const {
    return "Android";
}

double Android::getPrice() const {
    return 899.99;
}
