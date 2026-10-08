#include <stdio.h>

int main()
{
    int numbers[10];
    int max, min, sum = 0;
    float mean;
    int i, j, temp;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    max = numbers[0];
    min = numbers[0];

    for (i = 1; i < 10; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];

        if (numbers[i] < min)
            min = numbers[i];
    }

    /* BUG: integer division happens before the result is stored in mean */
    mean = sum / 10;

    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mean: %.2f\n", mean);

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted list: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    if (mean < (min + max) / 2.0)
        printf("\nMean is closer to the minimum.\n");
    else if (mean > (min + max) / 2.0)
        printf("\nMean is closer to the maximum.\n");
    else
        printf("\nMean is exactly midway between them.\n");

    return 0;
}
