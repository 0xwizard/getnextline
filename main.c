#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>


int main(void)
{
    //char *buff = malloc(sizeof(char *) * 1);
    int a = open("test.txt", O_RDONLY | O_CREAT | O_APPEND, 0644);
    //read(a, buff, BUFFER_SIZE);
    printf("%s", get_next_line(a));
    printf("%s", get_next_line(a));
    printf("%s", get_next_line(a)); //last print is buggy fix it 

}