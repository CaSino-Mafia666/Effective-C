//http://robertseacord.com/wp/errata/

//First one is already done according to the errata.

#include <stdio.h>

size_t find_element(size_t len, int arr[len], int key)
{
    size_t pos = (size_t)-1;

    for (size_t i = 0; i < len; ++i)
    {
        if (arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int main(void)
{
    size_t len = 7;
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int key = 9;

    size_t found = find_element(len, arr, key);
    if (found == -1)
    {
        printf("Key not in  array");
    }
    else
    {
        printf("IDX: %zu ", found);
    }
    return 0;
}

//https://www.geeksforgeeks.org/compute-the-integer-absolute-value-abs-without-branching/

//I wasn't able to do this exercise. It states there is a bug here if we pass a two's complement number.
int absolute_value(int a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}