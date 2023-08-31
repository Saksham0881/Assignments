#include<stdio.h>
int main(){
    int n,m;
    printf("Enter row and Enter Column :");
    scanf("%d%d",&n,&m);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}