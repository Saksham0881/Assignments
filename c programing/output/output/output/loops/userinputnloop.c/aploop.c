#include<stdio.h>
int main(){
    int n;
    printf(" Enter a Number :");
    scanf("%d",&n);
    int i;
    for( i=4; i<=(3*n)+1; i=i+3){
        printf("%d\n",i);
    }
    return 0;

}