#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>


int main(void)
{
    int a = open("test.txt", O_RDONLY);
    char *buff;
    buff = get_next_line(a);
    buff = NULL;
    //read(a, buff, BUFFER_SIZE);
    while ((ft_strchr('\n', buff)))
    {
        printf("%s", buff);
        free(buff);
        buff = get_next_line(a);
    }
    printf("%s",buff);
    free(buff);
   // buff = get_next_line(a);
   // printf("%s", buff);
   // free(buff);
    //  printf("%s", get_next_line(a));
    //  printf("%s", get_next_line(a)); //last print is buggy fix it 

}