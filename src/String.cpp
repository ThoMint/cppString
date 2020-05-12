#include <String.hpp>

String::String()
{
	this->data = nullptr;
}

String::String(const String &s)
{
	this->data = new char[s.getLen()+1];
	strcpy(this->data,s.getData());
}

String::String(const char* s)
{
	this->data = new char[strlen(s)+1];
	strcpy(this->data,s);
}

String::~String()
{
	delete[] data;
}

unsigned long String::getLen() const
{
	return strlen(this->data);
}

char* String::getData() const
{
	return this->data;
}

String String::operator= (const char* s)
{
	this->data = new char[strlen(s)+1];
	strcpy(this->data,s);
}

std::ostream& operator<< (std::ostream &out, const String &s)
{
	out << s.getData();
	return out;
}