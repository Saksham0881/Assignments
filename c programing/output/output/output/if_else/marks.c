#include<stdio.h>
/*int main (){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>80){
        printf("A grade");
    }
    else if (n>60){
        printf("B Grade");
    }
    else if (n>40){
        printf("C Grade");
    }
    else{
        printf("F Grade");
    }
    return 0;
}*/
int main(){
    int n;
    printf(" Enter a Number :");
    scanf("%d",&n);
    if(n>80){
        printf("A Grade");
    }
    else{
        if(n>60){
            printf("B Grade");
        }
        else{
            if(n>40){
                printf("C Grade");
            }
            else{
                printf("F Grade"); 
            }
        }
    }

}