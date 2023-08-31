/*
METHOD :-1
#include<stdio.h>
int main(){
    int i, j,  n ;
    printf("Enter a Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=(n+1)-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/ 
//METHOD :- 2
#include<stdio.h>
int main(){
    int i, j, n ;
    printf("Enter a Number :");
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++){
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}