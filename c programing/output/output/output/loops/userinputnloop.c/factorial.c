#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int i ,a=1;
    for(i=1;i<=n;i++){
        a= i*a;
    }
     printf("Factorial : %d",a);
    return 0;
}