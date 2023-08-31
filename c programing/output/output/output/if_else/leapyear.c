#include<stdio.h>
int main(){
    int l;
    printf("Enter a Year :");
    scanf("%d",&l);
    if(l%4==0){
        printf("Given Year Is a Leap Year.");
    }
    else{
        printf("Given Year Is Not a Leap Year.");
    }
}