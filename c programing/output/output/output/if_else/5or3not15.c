#include<stdio.h>
/*int main(){
    int n;
    printf("Eter a Number:");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("Number is divisible by 3 and 5 but not by 15 ");
        }
        else{
            printf("Number is divividble by 15.");
        }
    }
    else{
        printf("number is not divisible by 3 and 5 both.");

    }
}*/
int main(){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && n%15!=0
    ){
        printf("number is divisible by 3 and 5 by not by 15");
    }
    else{
        printf("number is not matching the required condition");
    }
    return 0;


}
 