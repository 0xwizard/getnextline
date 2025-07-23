#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void	recursiveprint(int fd)
{
	char *a = get_next_line(fd);
	if (a)
	{
		recursiveprint(fd);
		printf("%s", a);
	}
}
int main(void)
{
	int i;
	int b;
	char *arr[1024];
	char *test; 
	
	b = open("test.txt", O_RDONLY);
	i = 0;
	recursiveprint(b);
	// test = get_next_line(b);
	// while (test != NULL)
	// {
	// 	arr[i] = test;
	// 	i++;
	// 	test = get_next_line(b);
	// }
	// i--;
	// while (i >= 0)
	// {
	// 	printf("%s", arr[i]);
	// 	i--;
	// }
}
// int main(void)
// {
// 	char *arr[] = {"Merhaba", "Ben", "Hakan"};
// 	int i = 0;
// 	while (arr[i])
// 		i++;
// 	while (arr[i])
// 	{
// 		printf("%s", arr[i]);
// 		i--;
// 	}
// }
// int	main(void)
// {
	// int		a;
	// char	*buff;
	//int		i;

	// a = open("test.txt", O_RDONLY);
	// read(a, buff, BUFFER_SIZE);
	// while (++i < 5)
	// {
	// 	buff = get_next_line(a);
	// 	printf("%s", buff);
	// 	free(buff);
	// }
	// close(a);
	// free(buff);
	// printf("%s", buff);
	// free(buff);
	// printf("%s", buff);
	// printf("%s", get_next_line(a)); //last print is buggy fix it


	// buff = get_next_line(a);
	// printf("%s", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("%s", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("%s", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("%s", buff);
	// free(buff);
	//buff = get_next_line(a);
	//printf("%s", buff);
	//free(buff);
	// buff = get_next_line(a);
	// printf("%s", buff);
	// free(buff);
// }
