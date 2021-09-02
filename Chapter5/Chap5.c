#include <stdio.h>

//First excercise is already done according to errata

//No clue on the third one...

//This is the second one.

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
    int key = 5;

    size_t result = find_element(len, arr, key);

    if (result == -1)
    {
        printf("Key not in  array");
    }
    else
    {
        printf("ARR[%zu] ", result);
    }
    return 0;
}