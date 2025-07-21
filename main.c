#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>


int main(void)
{
    int a = open("test.txt", O_RDONLY);
    char *buff;
    //read(a, buff, BUFFER_SIZE);
    int i = -1;
    while (++i < 5)
    {
        buff = get_next_line(a);
        //printf("y\n");
        printf("LINE:%s#\n", buff);
        free(buff);
    }
    close (a);
    //printf("%s", buff);
   // free(buff);
     //printf("%s", buff);
    // printf("%s", get_next_line(a)); //last print is buggy fix it 

}