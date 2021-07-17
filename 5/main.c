#include <stdio.h>

int main()
{
    //Lassen Sie den nachfolgenden Code unverändert.
    int a[100], b[100], i=0, e;
    do {
        scanf("%d",&e);
        a[i] = e;
        i++;
    } while(e != -1111);
    
    i=0;
    
    do {
        scanf("%d",&e);
        b[i] = e;
        i++;
    } while(e != -1111);
    
    //Lassen Sie den Code bis hierher unverändert.
    int c[100];

    for(int i = 0; i < 100; ++i) {
        c[i] = a[i] - b[i];
    }
    
    //Lassen Sie den nachfolgenden Code unverändert.
    
    while(c[i] != -1111) {
        printf("%d ",c[i]); //Array ausgeben.
        i++;
    }
    //Lassen Sie den Code bis hierher unverändert.
    return 0;
}