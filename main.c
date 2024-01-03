#include <stdio.h>

int main()
{
    int mb,kb,bit,bayt;

    printf("Necha MB ni bit qilmoqchisiz: ");
    scanf("%d",&mb);
    kb = mb*1024;
    bayt = kb*1024;
    bit = bayt *8;
    printf("%d",bit);
    return 0;
    }
