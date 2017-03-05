#include <string>
#include <exception>

class DivideByZeroException : public std::exception
{
public:
	DivideByZeroException(const char* message)
		: std::exception(message) {}
};

class Calc
{
public:
	int Add(int a, int b);
	int Subtract(int a, int b);
	int Divide(int a, int b);
};
