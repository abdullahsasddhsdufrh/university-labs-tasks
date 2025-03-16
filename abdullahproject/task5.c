#include <stdio.h>


float calculatePerformanceBonus(int rating, int salary)
{
    float bonousp;
    if (rating ==5)
    {
        bonousp = 0.2 * salary ;
        return bonousp;
    }

    else if (rating ==4)
    {
        bonousp = 0.15 * salary;
        return bonousp;
    }

    else if (rating ==3)
    {
        bonousp = 0.1 * salary;
        return bonousp;
    }
    else if (rating >= 2)
    {
        bonousp = salary;
        return bonousp;
    }
    else
    {
        return 0;
    }
}
float calculateExperienceBonus(int years, int salary)
{
    float by;
    if (years > 5)
    {
        by = (0.05 * salary);
        return by;
    }
    else
    {
        return 0;
    }
}
float calculateTotalBonus(int salary, int rating, int years)
{

    float first=calculatePerformanceBonus(rating, salary);
    float second=calculateExperienceBonus(years, salary);
    printf("Performance Bonus :%.0f",first);
    printf("\nExperience Bonus:%.0f",second);

    float sum=calculatePerformanceBonus(rating, salary)+calculateExperienceBonus(years, salary);
    return sum;
}
int main()
{
    int salary, rating, years;
do
{
    printf("Enter employee's salary: ");
    scanf("%d", &salary);
    if (salary < 0)
    {
        printf("Please enter a positive number.\n");
    }
} while (salary<0);

do
{
    printf("Enter performance rating (1-5): ");
    scanf("%d", &rating);
    if (rating>5||rating<0)
    {
        printf("Please enter a correct rating.\n");
    }
} while (rating>5||rating<0);

do
{
    printf("Enter years of experience: ");
    scanf("%d", &years);
    if (years<0)
    {
        printf("Please enter a correct year\n");
    }
} while (years<0);

   
    float totalBonus = calculateTotalBonus(salary, rating, years);

  printf("\nTotal Bonus:%.2f",totalBonus);


    return 0;
}