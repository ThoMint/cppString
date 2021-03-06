#include <String.hpp>

hoft::String::String()
{
	if(this->data != nullptr)
	{
		delete[] this->data;
	}
}

hoft::String::String(const hoft::String &s)
{
	if(this->data != nullptr)
	{
		delete[] this->data;
	}
	this->data = new char[s.getLen()+1];
	strcpy(this->data,s.getData());
}

hoft::String::String(const char* s)
{
	if(this->data != nullptr)
	{
		delete[] this->data;
	}
	this->data = new char[strlen(s)+1];
	strcpy(this->data,s);
}

hoft::String::~String()
{
	if(this->data != nullptr)
	{
		delete[] this->data;
	}
}

unsigned long hoft::String::getLen() const
{
	return strlen(this->data);
}

char* hoft::String::getData() const
{
	return this->data;
}

void hoft::String::insert(const hoft::String &s, unsigned long pos)
{
	char *temp = new char[strlen(s.getData())+strlen(this->data)+1];
	strncpy(temp,this->data,pos);
	temp[pos] = 0;
	strcat(temp,s.getData());
	strcat(temp,this->data+pos);
	this->data = temp;
}

hoft::String hoft::String::operator= (const char* s)
{
	if(this->data != nullptr)
	{
		delete[] this->data;
	}
	this->data = new char[strlen(s)+1];
	strcpy(this->data,s);
}

hoft::String hoft::operator+(const hoft::String &s1, const hoft::String &s2)
{
	char* temp = new char[s1.getLen()+s2.getLen()+1];
	strcpy(temp,s1.getData());
	strcat(temp,s2.getData());
	String ret(temp);
	delete[] temp;
	return ret;
}

std::ostream& hoft::operator<< (std::ostream &out, const hoft::String &s)
{
	out << s.getData();
	return out;
}

bool hoft::operator==(const hoft::String &s1, const hoft::String &s2)
{
	return strcmp(s1.getData(),s2.getData()) == 0;
}

bool hoft::operator!=(const hoft::String &s1, const hoft::String &s2)
{
	return strcmp(s1.getData(),s2.getData()) != 0;
}

bool hoft::operator<(const hoft::String &s1, const hoft::String &s2)
{
	return strcmp(s1.getData(),s2.getData()) < 0;
}

bool hoft::operator>(const hoft::String &s1, const hoft::String &s2)
{
	return strcmp(s1.getData(),s2.getData()) > 0;
}