#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

// RECURSIVE REVERSE
// void recursive(int fd)
// {
// 	char *a = get_next_line(fd);
// 	if (a)
// 	{
// 			recursive(fd);
// 			printf("%s", a);
// 	}
// }

// int	main(void)
// {
//  	int b;

// 	b = open("test.txt", O_RDONLY);
// 	recursive(b);
// 	close (b);
// }

// ITERATIVE REVERSE

// int		main(void)
// {
// 	int a = open("test.txt", O_RDONLY);
// 	int i = 0;
// 	char *test;

// 	char *buff[1024];

// 	test = get_next_line(a);
// 	while (test != NULL)
// 	{
// 		buff[i] = test;
// 		i++;
// 		test = get_next_line(a);
// 	}
// 	i--;
// 	while (i >= 0)
// 	{
// 		printf("%s", buff[i]);
// 		i--;
// 	}
// }

// ARRAY REVERSE PRINT

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

// REGULAR ITERATIVE

// int	main(void)
// {
// 	int		a;
// 	char	*buff;

// 	a = open("test.txt", O_RDONLY);
// 	buff = get_next_line(a);
// 	while (buff)
// 	{
// 		printf("%s", buff);
// 		free(buff);
// 		buff = get_next_line(a);
// 	}
// 	free(buff);
// }

// REGULAR BONUS
// int	main(void)
// {
// 	int a = open("test.txt", O_RDONLY);
// 	int b = open("test2.txt", O_RDONLY);
// 	char *buff = get_next_line(a);
// 	char *buff2 = get_next_line(b);
// 	while (buff || buff2)
// 	{
// 		printf("%s", buff);
// 		free(buff);
// 		buff = get_next_line(a);
// 		printf("%s", buff2);
// 		free(buff2);
// 		buff2 = get_next_line(b);
// 	}
// }


// READ FROM TERMINAL

// int		main(void)
// {
// 	char *buff = get_next_line(0);

// 	while (buff)
// 	{
// 		printf("%s", buff);
// 		free(buff);
// 		buff = get_next_line(0);
// 	}
// }


