#include <stdio.h>

//modified from http://www.java2s.com/Code/C/Function/Function-Pointer.htm

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int (*p[2])(int x, int y);

int main(void)
{
    p[0] = sum;      /* address of sum() */
    p[1] = subtract; /* address of subtract() */
    p[2] = mul;      /* address of mul() */

    int result;
    int i;
    int j;
    int op;

    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);

    printf("0: Add, 1: Subtract, 2: Multiply\n");

    do
    {
        printf("Enter number of operation: \n");
        scanf("%d", &op);
    } while (op < 0 || op > 2);

    result = (*p[op])(i, j);
    printf("%d \n", result);

    return 0;
}