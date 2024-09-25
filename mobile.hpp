#ifndef MOBILE_H
#define MOBILE_H

#include <string>

// Abstract Mobile class
class Mobile {
public:
    // Virtual Destructor
    virtual ~Mobile() = default;

    // Pure virtual function for mobile type
    virtual std::string getMobileType() const = 0;

    // Pure virtual function for pricing
    virtual double getPrice() const = 0;
};

// Derived class for iPhone
class iPhone : public Mobile {
public:
    // Overriding getMobileType
    std::string getMobileType() const override;

    // Overriding getPrice
    double getPrice() const override;
};

// Derived class for Android
class Android : public Mobile {
public:
    // Overriding getMobileType
    std::string getMobileType() const override;

    // Overriding getPrice
    double getPrice() const override;
};

#endif // MOBILE_H
