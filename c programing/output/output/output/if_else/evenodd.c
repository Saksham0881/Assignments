#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(n%3==0){
        printf("%d is divisible by 3",n);
}
    else if (n%3!=0){
        printf("%d is not divisible by 3",n);
    }
    return 0;
}