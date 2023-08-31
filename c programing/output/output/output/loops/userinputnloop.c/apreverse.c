#include<stdio.h>
int main(){
 /* method 1 :- int i ;
    for( i=100; i<=100 && i>=1; i= i-3){
        printf("%d\n",i);
    } */
 /* method 2 :-  user input    int n;
    printf(" Enter a Number :");
    scanf("%d",&n);
    int i;
    int a = 100 ;
    for( i=1; i<=n; i++){
        printf("%d\n",a);
        a = a-3;
    } */

    int i;
    int a = 100 ;
    for( i=1; a>0; i++){
        printf("%d\n",a);
        a = a-3;
    }
    return 0;

}