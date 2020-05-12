#pragma once

#include <string.h>
#include <iostream>

namespace hoft
{
class String
{
private:
    char *data;

public:
    String();
    String(const String &s);
    String(const char *s);
    ~String();

public:
    unsigned long getLen() const;
    char *getData() const;

public:
    void insert(const String &s, unsigned long pos);

public:
    String operator=(const char *s);
    friend String operator+(const String &s1, const String &s2);
    friend std::ostream &operator<<(std::ostream &out, const String &s);
    friend bool operator==(const String &s1, const String &s2);
    friend bool operator!=(const String &s1, const String &s2);
    friend bool operator<(const String &s1, const String &s2);
    friend bool operator>(const String &s1, const String &s2);
};
} // namespace hoft