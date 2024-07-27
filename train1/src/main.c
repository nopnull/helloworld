#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    printf("[%s-%d]\n", __func__, __LINE__);
    for (int i = 0; i < 10; i++)
    {
        printf("hello China~%d\n", i);
    }

    int a = 10, b = 20;
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
    return (0);
}

int swap(int *a, int *b)
{
    int tmp[sizeof(int)] = {0};
    tmp[0] = *a;
    *a = *b;
    *b = tmp[0];
    return (0);
}


                
                        