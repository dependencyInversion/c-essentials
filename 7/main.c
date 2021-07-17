#include<stdio.h>

int fak(int n)
{
    if (n <= 0) return 1;

    return (n * fak(n - 1));
}

int main()
{
    int n = 0;

    scanf("%i", &n);

    if (n >= 12) {
        printf("Eingabe nicht im Wertebereich\n");
    }

    printf("%i", fak(n));

    return 0;
}