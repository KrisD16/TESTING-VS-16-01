#include <stdio.h>

int main()
{
    int p;
    printf("Enter p: ");
    scanf("%d", &p);
    int q;
    printf("Enter q: ");
    scanf("%d", &q);
    int divider = 2;
    int count = 0;
    int i = 0;

    while (p < q)
    {
        int pcopy = p;
        count = 0;
        i = 0;
        divider = 2;
        while (i < pcopy / 2)
        {
            if (pcopy % divider == 0)
            {
                count++;
            }
            divider++;
            i++;
        }
        if (count == 0)
        {
            printf("The numbers are: %d\n", p);
        }
        p++;
    }

    return 0;
}
