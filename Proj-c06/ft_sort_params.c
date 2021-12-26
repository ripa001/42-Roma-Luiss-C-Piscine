#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void ord_arg(int argc ,char *argv[])
{
    int i;
    int j;
    char *temp;

    i = 0;
    while(i < argc - 1)
    {
        j = i + 1;
        while(j < argc)
        {
            if(strcmp(argv[i], argv[j]) > 0)
            {
                temp = argv[j];
                argv[j] = argv[i];
                argv[i] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
	int i;

    ord_arg(argc, argv);
	i = 1;
	while(i < argc)
	{
		write(1, argv[i], sizeof(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}