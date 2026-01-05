/*Get multiple numbers from the user and store
them in an array. Stop getting numbers
when the number is 0. Add each
number's digits and put them in a new
array and arrange the new array in
ascending order and print same.*/

#include <stdio.h>

int main()
{
    int a[50], b[50];
    int i = 0, n, temp;
    int num, sum, j;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;

        a[i] = n;
        i++;
    }
    for (j = 0; j < i; j++)
    {
        num = a[j];
        sum = 0;

        while (num > 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        b[j] = sum;
    }
    for (j = 0; j < i - 1; j++)
    {
        for (n = j + 1; n < i; n++)
        {
            if (b[j] > b[n])
            {
                temp = b[j];
                b[j] = b[n];
                b[n] = temp;
            }
        }
    }
    for (j = 0; j < i; j++)
    {
        printf("%d ", b[j]);
    }

    return 0;
}
