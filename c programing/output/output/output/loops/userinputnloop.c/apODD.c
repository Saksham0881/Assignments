#include<stdio.h>
int main(){
    int n;
    printf(" Enter a Number :");
    scanf("%d",&n);
    int i;
    for( i=1; i<=(2*n)-1; i=i+2){
        printf("%d\n",i);
    }
    return 0;

}