#include <stdio.h>

int main (void)
{   
    int a=5;
    int b=10;
    int *p;
    p = &b;
    printf("%d\n", *p);
    return 0;
}