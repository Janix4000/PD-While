#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
	std::cout << "Pierwsze zadanie: " << "\n";
	int k = -5, i;
	for (i = 1; i <= 10; i += 2)
	{
		std::cout << k << "\n";
		std::cout << i << "\n";
		k *= 2;
	}
	std::cout << k + i << "\n";

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();



	std::cout << "Drugie zadanie: " << "\n";
	k = 3; i = 0;
	while (i < 4)
	{
		std::cout << k << "\n";
		k *= -3;
		std::cout << i << "\n";
		i++;
	}
	std::cout << 2 * k << "\n";

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	std::cout << "Trzecie zadanie: " << "\n";

	i = 11; k = 10;
	do
	{
		std::cout << i << "\n";
		k -= 4;
		std::cout << k << "\n";
		i -= 3;
	} while (i >= 3);
	std::cout << k - 2 << "\n";

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}