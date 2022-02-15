#include <stdio.h>

void swap1(int *a, int *b)
{
 *a = *a ^ *b;
 *b = *a ^ *b;
 *a = *a ^ *b;
}


int main()
{
    int x, y;

    x=7;
    y=9;

    swap1(&x,&y);

    printf("%d\n%d",x,y);

    return 0;
}
