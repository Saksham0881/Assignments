#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        int a =(n/2)+1;
        if(j==a || i==a){
            printf("*");
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
    return 0;
}