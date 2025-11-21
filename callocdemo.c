#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p = (float*)calloc(4,sizeof(float));
    p[0] = 64.7;
    p[1] = 34.6;
    p[2] = 12.0;
    p[3] = 14.9;
 printf("%d" ,p[0]);
    free(p);
}