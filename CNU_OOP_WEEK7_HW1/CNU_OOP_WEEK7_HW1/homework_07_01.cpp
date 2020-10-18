#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class AnyString {
	std::string anyString;

public:
	AnyString(const std::string& anyString) : anyString(anyString) {}
	std::string getAnyString() {
		return "Stored String :: " + anyString;
	}

friend ofstream& operator<<(ofstream& os, AnyString& as);

};

ofstream& operator<<(ofstream& os, AnyString& as)
{
	os << as;
	return os;
}


int main() {
	std::ofstream out("testOveroding.txt");
	AnyString a("Hello, this is operator overloading test!!!");
	std::string output = a.getAnyString();
	out << output << std::endl;

	return 0;
}