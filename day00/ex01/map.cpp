#include <iostream>
#include <cstring>

using namespace std;
int	main()
{
	string input;
	while (1)
	{
		cin >> input;
		if (strcmp(input.c_str(), "EXIT") == 0)
			return (0);
		if (strcmp(input.c_str(), "ADD") == 0)
			return (0);
		if (strcmp(input.c_str(), "SEARCH") == 0)
			return (0);
		cout << input << endl;
	}
}
