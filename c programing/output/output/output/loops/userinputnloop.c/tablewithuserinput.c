#include<stdio.h>
int main(){
    int i;
   /* for(i=19; i<=190; i=i+19){
        printf("%d\n",i);
    } */
    // 19 table
    int n ;
    printf("Enter a Number :");
    scanf("%d",&n);
    for (i=n; i<=n*10; i=i+n){
        printf("%d \n",i);
    }
    return 0;
}