#include<stdio.h>
int main(){
    int n;
    int i ;
    int a= 0;
    printf("Enter a Number :");
    scanf("%d",&n);
    for( i=2; i<=n-1; i++){
        if(n%i==0){
            a=1;
        break;
        }
    }
    if(n==1)
    printf("1 is neither prime nor composite.");
    else if(a==0)
    printf("Number is Prime.");
    else
     printf("Number is Composite.");
    
    return 0;
}