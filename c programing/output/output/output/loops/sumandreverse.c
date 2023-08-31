#include<stdio.h>
int main(){
    int n ;
    printf("Enter a Number :");
    scanf("%d",&n);
    int ld=0,s=0,r=0;
    while(n!=0){
        ld=n%10;
        s=s+ld;
        r=r*10+ld;
        n=n/10;
    }
    printf("%d%d",s,r);
    return 0;
}