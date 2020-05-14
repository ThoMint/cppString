#include <iostream>
#include <String.hpp>
#include <string>

int main()
{
    hoft::String s1("ac");
    hoft::String s2("b");
    hoft::String s3("c");
    std::cout << (s1<s2?"ac<b":"ac>b") << std::endl;
    std::cout << s1+s2+s3 << std::endl;
    s1.insert(s2,1);
    s3 = "defg";
    s2=s1;
    std::cout << s1+s3 << std::endl;
}