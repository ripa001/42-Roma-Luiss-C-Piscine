#include <unistd.h>

int main(int argc, char *argv[])
{
	argc--;
	while(argc > 0)
	{
		write(1, argv[argc], sizeof(argv[argc]));
		write(1, "\n", 1);
		argc--;
	}
}