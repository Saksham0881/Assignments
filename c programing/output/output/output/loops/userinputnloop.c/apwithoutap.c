
#include<stdio.h>
int main(){
    int n;
    printf(" Enter a Number :");
    scanf("%d",&n);
    int i;
    int a = 4 ;
    for( i=1; i<=n; i++){
        printf("%d\n",a);
        a = a +3;
    }
    return 0;

}