#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		a;
	char	*buff;
	int		i;

	a = open("test.txt", O_RDONLY);
	// read(a, buff, BUFFER_SIZE);
	i = -1;
	buff = get_next_line(a);
	printf("LINE:%s#\n", buff);
	free(buff);
	// buff = get_next_line(a);
	// printf("LINE:%s#\n", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("LINE:%s#\n", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("LINE:%s#\n", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("LINE:%s#\n", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("LINE:%s#\n", buff);
	// free(buff);
	// buff = get_next_line(a);
	// printf("LINE:%s#\n", buff);
	// free(buff);
	while (++i < 5)
	{
		buff = get_next_line(a);
		printf("%s\n", buff);
		free(buff);
	}
	close(a);
	// printf("%s", buff);
	// free(buff);
	// printf("%s", buff);
	// printf("%s", get_next_line(a)); //last print is buggy fix it
}
