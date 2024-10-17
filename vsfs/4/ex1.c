#include<stdio.h>
#include<unistd.h>

void	SetridSestupne(int a, int b)
{
	if(a > b)
	{
		printf("%d %d\n", a, b);
	}
	else
		printf("%d %d\n", b, a);
}
// int	main()
// {
// 	SetridSestupne(1 ,8);
// 	return (0);
// }
