#include <stdio.h>

static unsigned int counter = 0;

void increment(void)
{
    counter++;
    printf("%d ", counter);
}

unsigned int ret(unsigned int ctr) {
    return ctr;
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        increment();
    }
    ret(counter);
    printf("\n");
    printf("TIMES EXECUTED: %u ", counter);
    return 0;
}