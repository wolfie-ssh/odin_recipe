#include <stdio.h>

int main(void)

{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    if (height != 160)
    printf("Not Tall Enough\n");
    else
    printf("Tall Enough!\n");
    return 0;
}