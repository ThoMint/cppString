#pragma once

#include <string.h>
#include <iostream>

namespace hoft  //Namespace in order to distinguish hoft::String from std::string
{
class String;

String operator+(const String &s1, const String &s2);
std::ostream &operator<<(std::ostream &out, const String &s);
bool operator==(const String &s1, const String &s2);
bool operator!=(const String &s1, const String &s2);
bool operator<(const String &s1, const String &s2);
bool operator>(const String &s1, const String &s2);


class String
{
private:
    char *data = nullptr; 

public: //Public constructors/destructor
    String();
    String(const String &s);
    String(const char *s);
    ~String();

public: //Public Getters marked as const so they can be utilized with ref to const
    unsigned long getLen() const;
    char *getData() const;

public: //Public functions
    void insert(const String &s, unsigned long pos);

public: //Public operators (operators with more than one parameter are implemented as friend because they dont refer to this object)
    String operator=(const char *s);
    friend String operator+(const String &s1, const String &s2);
    friend std::ostream &operator<<(std::ostream &out, const String &s);
    friend bool operator==(const String &s1, const String &s2);
    friend bool operator!=(const String &s1, const String &s2);
    friend bool operator<(const String &s1, const String &s2);
    friend bool operator>(const String &s1, const String &s2);
};
} // namespace hoft