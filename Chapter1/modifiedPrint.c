#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    char str[] = "Hello, world!";

    if (printf("%s\n", str) != printf("%d\n", strlen(str)))
    {
        return EXIT_FAILURE;
    }
    else
    {
        return EXIT_SUCCESS;
    }
}
