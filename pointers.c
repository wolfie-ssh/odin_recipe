#include <stdio.h>

int main (void)
{   
    int a=5;
    int b=10;
    int *p;
    p = &b;
    printf("%d\n", *p);
    printf("p: %p\n", p);
    printf("&b: %p\n", &b);
    printf("&a: %p\n", &a);
    return 0;

}