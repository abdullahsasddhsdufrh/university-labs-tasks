#include <stdio.h>

int isprime(int num)
{
    int prime, count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        return count;
    }
    else
    {
        return 0;
    }
}

void nextprime(int num){
    while (1)
    {
       num++;  
       int a;
       a=isprime(num);
       if (a == 2) {  

           printf(" Next prime number: %d", num);
           break;
       }
   
    }
    
      


}


int main()
{

    int num;
    do
    {
        printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Please enter a positive number.\n");
    }
    
    } while (num<0);
    
    int a = isprime(num);

    if (a == 2)
    {
        printf("THE NUMBER %d IS PRIME.", num);
    }
    else
    {
        printf("Number %d is not prime.", num);
        nextprime(num);
    }
   

    return 0;
}