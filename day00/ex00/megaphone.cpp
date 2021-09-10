#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i(0), j(0);

	while (++i != argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > 96 &&  argv[i][j] < 122)
				cout << char(argv[i][j] - 32);
			else
				cout << argv[i][j];
			j++;
		}
	}
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
	return (0);
}
