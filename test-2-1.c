#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    }
    while (n < 1);
    int x = 1;
    int sum = 0;

    while (x < n)
    {
        sum += x;
        x += 2;
    }
    printf("The sum is %d", sum);

    return 0;
}
