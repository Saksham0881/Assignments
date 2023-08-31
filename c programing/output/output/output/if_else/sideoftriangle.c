#include<stdio.h>
int main(){
    int a , b, c ;
    printf("ENter 1st Side :");
    scanf("%d",&a);
    printf("ENter 2nd Side :");
    scanf("%d",&b);
    printf("ENter 3rd Side :");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid Triangle.");
    }
    else{
        printf("Invalid Triangle.");
    }
}
   