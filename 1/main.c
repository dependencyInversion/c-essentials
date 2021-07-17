#include <stdio.h>

int sum(int left, int right)
{
    return left + right;
}

int main()
{
    int left = 0;
    int right = 0;
    int result = 0;

    scanf("%i", &left);
    scanf("%i", &right);
    printf("%i %i\n", left, right);

    result = sum(left, right);

    printf("%i", result);

    return 0;
}