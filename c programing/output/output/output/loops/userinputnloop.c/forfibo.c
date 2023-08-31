#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int i , sum =1,a=1,b=1;
    for(i=1; i<=n-2 ; i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("\n% d",sum);
    return 0;
}