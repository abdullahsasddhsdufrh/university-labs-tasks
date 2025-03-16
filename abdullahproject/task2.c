#include<stdio.h>

void   reversenum(int num){
int ab,re=0;
while(num!=0){
ab=num%10;
re=re*10+ab;
num=num/10;


}
printf("The reversed number:%d ",re);


}


int main(){
int num;

    printf("Enter a number: ");
    scanf("%d",&num);



    reversenum(num);

    return 0;
}