#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}
