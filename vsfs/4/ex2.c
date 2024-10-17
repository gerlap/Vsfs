#include<stdio.h>
#include<unistd.h>

int	*AbsolutniHodnotaPole(int *pole, size_t size)
{
	int	i;

	i = 0;
	while(i < size)
	{
		if (pole[i] < 0)
			pole[i] = -pole[i];
		//printf("%d ,", pole[i]);
		i++;
	}
	return(pole);
}
// int	main()
// {
// 	int pole[8] = { 5, -2, 0, -1, 7, -12, 2, 4 };
// 	AbsolutniHodnotaPole(pole, 8);
// }
