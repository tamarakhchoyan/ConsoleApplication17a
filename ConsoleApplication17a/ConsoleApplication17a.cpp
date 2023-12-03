#include <iostream>
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (b > a && c > a && b - a > c - a)
	{
		std::cout << c << std::endl;
		std::cout << c - a;
	}
	else {
		std::cout << b << std::endl;
		std::cout << b - a;
	}
	return 0;
}