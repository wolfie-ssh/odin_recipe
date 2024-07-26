#include <stdio.h>

int main(void)

{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    if (height != 160)
    printf("Value Not Equal To 160\n");
    else
    printf("Value Equal To 160\n");
    return 0;
}