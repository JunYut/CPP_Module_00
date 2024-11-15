# include <iostream>

using std::cout;
using std::endl;

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	int	i;

	i = 0;
	while (++i < argc)
	{
		int	j;

		j = -1;
		while (argv[i][++j])
			cout << (char)toupper(argv[i][j]);
		if (i < argc - 1)
			cout << ' ';
	}
	cout << std::endl;
	return (0);
}
