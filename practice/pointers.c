#include <stdio.h>

int main()
{
    char var[] = "mango"; // later changed to "mango"
    char *ptr = var;
    printf("%p\n", ptr);
    printf("%c \n", *ptr);
    printf("%d \n", *ptr);
    printf("%p \n", & ptr);
}