#include "stdlib.h"
#include <stdio.h>

int summe(int,int);

int main()
{
    int i;
    for(i=0;i<10;i++) {
        printf("%d %d %d\n",i,summe(2,i),summe(-3,i));
    }
    return 0;
}

int summe(int a, int b)
{
    int c = a + b;
    return c;
}