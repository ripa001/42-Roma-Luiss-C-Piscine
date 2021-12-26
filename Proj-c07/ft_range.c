#include <string.h>
#include <stdlib.h>


int *ft_range(int min, int max)
{
	int *arr;
	int i;

	arr = (int* )malloc(sizeof(int) * (max - min));
	i = 0;
	while(min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return arr;
}
int main()
{
	int *newintArr;
	int intArr[] = {1,2,3,4,5,6};
	int i;

	for(i = 0; i < 6; i++)
		printf("%d || %p \n", intArr[i], newintArr);

	newintArr = ft_range(7,1);

	for(i = 0; i < 6; i++)
		printf("%d || %d \n", intArr[i], newintArr[i]);
}
