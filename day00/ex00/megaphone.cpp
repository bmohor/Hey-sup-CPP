#include <iostream>

int main(int argc, char **argv)
{
	int i(0), j(0);

	while (++i != argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > 96 &&  argv[i][j] < 122)
				std::cout << char(argv[i][j] - 32);
			else
				std::cout << argv[i][j];
			j++;
		}
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
