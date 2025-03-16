#include <stdio.h>

int findGCD(int num1, int num2)
{
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
void factorofnum1(int num1)
{

    printf("THE FACTORS OF %d : ", num1);
    for (int i = 1; i <= num1; i++)
    {

        if (num1 % i == 0)
        {
            printf("%d", i);
            if (i != num1)
            {
                printf(",");
            }
            else
            {
                printf("\n");
            }
        }
    }
}
void factorofnum2(int num2)
{

    printf("THE FACTORS OF %d : ", num2);

    for (int i = 1; i <= num2; i++)
    {

        if (num2 % i == 0)
        {
            printf("%d", i);
            if (i != num2)
            {
                printf(",");
            }
            else
            {
                printf("\n");
            }
        }
    }
}

void commonfactors(int num1, int num2)
{
    int smallnum, a, b;
    if (num1 < num2)
    {
        smallnum = num1;
    }
    else
    {
        smallnum = num2;
    }

    printf("COMMON FACTORS : ");

    for (int i = 1; i <= smallnum; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("%d", i);
            if (i != smallnum)
            {
                printf(" ");
            }
        }
    }

    printf("\n");
}

int main()
{
    int num1, num2;
    do
    {
        printf("Enter 1st positive number: ");
        scanf("%d", &num1);
        if (num1 <= 0)
        {
            printf("Please enter a positive number.\n");
        }
    } while (num1 <= 0);

    do
    {
        printf("Enter 2nd positive number: ");
        scanf("%d", &num2);
        if (num2 <= 0)
        {
            printf("Please enter a positive number.\n");
        }
    } while (num2 <= 0);

   

    factorofnum1(num1);
    factorofnum2(num2);
    commonfactors(num1, num2);
    int gcd = findGCD(num1, num2);
    printf("Greatest Common Divisor of %d and %d is: %d", num1, num2, gcd);

    return 0;
}
