#include<stdio.h>
int main(){
    int n;
    printf("Enter a base :");
    scanf("%d",&n);
    int m;
    printf("Enter a exponet :");
    scanf("%d",&m);
    int i , p=1;
    for(i=1;i<=m;i++){
        p=n*p;
    }
    printf("%d",p);
}