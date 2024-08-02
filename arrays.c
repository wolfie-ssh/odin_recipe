#include <stdio.h>
int main(void) 

    {
    int grade[5];
    grade[0]=92;
    grade[1]=85;
    grade[2]=72;
    grade[3]=73;
    grade[4]=95;

    grade[2]=grade[2]+18;
    
    for(int i=0;i<5;i++)
        printf("Grade[%d]=%d\n", i, grade[i]);

    int total=0;
    for (int i=0; i<5;i++)
        total+=grade[i];
    printf("average of the grades is %d\n", total/5);
     }