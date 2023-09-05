#include <iostream>

int main()
{
	int x = 10;
	// int y = 10;
	try
	{
		if (x == 10)
			throw "stest";
	}
	catch(const char *msg)
	{
		std::cout << msg << '\n';
		return 0;
	}
	std::cout << "done" << std::endl;
}
