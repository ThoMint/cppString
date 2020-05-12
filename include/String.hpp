#pragma once

#include <string.h>
#include <iostream>

class String
{
private:
    char *data;
public:
    String();
    String(const String &s);
    String(const char* s);
    ~String();
public:
    unsigned long getLen() const;
    char* getData() const;
public:
    String operator= (const char* s);
    friend std::ostream& operator<< (std::ostream &out, const String &s);
};