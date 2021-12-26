#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *dest;

	if(max < min)
	{
		dest = 0;
		return (0);
	}
	dest = (int* )malloc(sizeof(int) * (max - min));
	if(!dest)
		return (-1);
	i = 0;
	while(min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	
	*range = dest;
	return i;

}
int main()
{
	int **newintArr;
	int intArr[] = {1,2,3,4,5,6};
	int i;

	for(i = 0; i < 8; i++)
		printf("%d || %p \n", intArr[i], newintArr);

	ft_ultimate_range(newintArr,1,8);

	for(i = 0; i < 7; i++)
		printf("%d || %d \n", intArr[i], newintArr[0][i]);
}
