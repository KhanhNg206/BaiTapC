#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, remainder, result = 0, n = 0 ;

    for (number = 100; number <= 999; ++number)
    {
        originalNumber = number;

        while (originalNumber != 0)
        {
            originalNumber /= 10;
            ++n;
        }

        originalNumber = number;

        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            result += pow(remainder, n);
            originalNumber /= 10;
        }

        if (result == number) {
            printf("%d\n", number);
        }

        n = 0;
        result = 0;
    }

    return 0;
}
