#include <stdio.h>
void display();

int marks[10];
int sum = 0;
unsigned int i, n;
double average;
int main()
{
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }
    average = (double)sum / n;

    printf("Average = %.2lf", average);
    return 0;
}
