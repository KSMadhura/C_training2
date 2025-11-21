#include <stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int *)malloc(4*sizeof(int));
    p[0] = 79;
    p[1] = 80;
    p[2] = 110;
    p[3] = 155;
    printf("%d" ,p[0]);
free(p);
}