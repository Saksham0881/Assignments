#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    if (a%5==0){
        printf("Given Number is Divisble by 5 !!");

    }
    else{
        printf(" Given Number is not Divisble by 5 !!");
    }
}