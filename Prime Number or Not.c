# Function_C-Program-2
# Write a program in C to check a number is a prime number or not using recursion.

#include <stdio.h>
int Prime(int, int);
int main()
{
    int num, prime_no;
    printf("\n Enter the prime number : ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("\n %d is not a prime number.", num);
    }
    else
    {
        prime_no = Prime(num, num / 2);
        if (prime_no == 1)
        {
            printf("\n %d is a prime number.", num);
        }
        else
        {
            printf("\n %d is not prime number.", num);
        }
    }
    return 0;
}
int Prime(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (num % i == 0)
            return 0;
        else
            Prime(num, i - 1);
    }
}
