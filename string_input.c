#include <stdio.h>
int main(void) 
{
    char s1[20];

    printf("Enter a String: ");
    scanf("%s", s1);

    for(int i=0; i<20;i++)
        printf("s1[%d] =%c\n",i, s1[i]);

    printf("s1: %s\n", s1);
    return 0;

}