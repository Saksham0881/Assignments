 #include<stdio.h>
 int main(){
    int n;
    printf("Enter a NUmber;");
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++){
        if(i%n==0){
              printf("Prime%d\n",i);
              }
        else{
            printf("composite%d",i);

        }
        
    }
    return 0;
 } 