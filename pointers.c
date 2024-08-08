#include <stdio.h>

int main (void)
{   
    int a=5;
    int b=10;
    int *p;
    p = &b;
    a=a+*p;
    
    /* printf("%d\n", *p);
    printf("p: %p\n", p);
    printf("&b: %p\n", &b);
    printf("&a: %p\n", &a);
    printf("a: %d\n", a);
    return 0; */

}