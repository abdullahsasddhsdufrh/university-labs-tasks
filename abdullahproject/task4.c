#include<stdio.h>
int sumofnum(int num){
int a,sum=0;
while (1)
{
    a=num%10;
    sum=sum+a;
    num=num/10;
 
    if (num==0)
    {
        break;
    }
   
}





    return sum;
}

int main(){

int num;
printf("Enter the number: ");
        scanf("%d", &num);

       int result= sumofnum(num);

       printf("The sum of digits of %d is : %d ",num,result);
    return 0;
}