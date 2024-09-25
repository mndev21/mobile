#ifndef MOBILE_H
#define MOBILE_H

#include <string>

class Mobile {
public:
    virtual ~Mobile() = default;

    virtual std::string getMobileType() const = 0;

    virtual double getPrice() const = 0;
};

class iPhone : public Mobile {
public:
    std::string getMobileType() const override;

    double getPrice() const override;
};


class Android : public Mobile {
public:
    std::string getMobileType() const override;

    double getPrice() const override;
};

#endif
