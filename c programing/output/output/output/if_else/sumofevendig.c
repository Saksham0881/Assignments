#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int ld=0, a=0;
    while(n!=0){
    ld= n%10;
    if(ld%2==0){
        a=a+ld;
    }
    n=n/10;
   }printf("%d",a);
    return 0;
}