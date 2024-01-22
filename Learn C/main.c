#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int sumEven = 0;
    int sumOdd = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    do
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
        i++;
    } while (i <= n);

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
