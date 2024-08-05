#include <stdio.h>

int main (void) {
    char s1[]="This is a String.";

    for(int i=0;i<20;i++)
        printf("s1[%d] = %c\n", i, s1[i]);
    
    printf("\n%s\n", s1);

}