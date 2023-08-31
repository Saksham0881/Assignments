#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int count = 0 ;
    while (n!=0){
        n=n/10;
        count++;
    }
    printf(" The no of digits in given no.%d",count);
    return 0;
}