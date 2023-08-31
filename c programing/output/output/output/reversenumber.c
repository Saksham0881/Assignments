#include<stdio.h>
int main(){
    int n ;
    printf(" Enter a Number :");
    scanf("%d",&n);
    int ld = 0;
    int r = 0 ;
    while(n!=0){
        ld = n%10;
        r = (r*10) + ld;
        n = n/10;
    }
    printf("Reverse Number : %d",r);
    return 0;
}