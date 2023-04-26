#include <iostream>

#define SUB(a, b) ((a)-(b))

int main()
{
	int a = 1;
	int b = 2;
	int c = 5;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b)*c << std::endl;
	std::cout << SUB(a, b+c)*c << std::endl;
}