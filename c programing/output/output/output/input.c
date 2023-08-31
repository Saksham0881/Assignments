#include<stdio.h>
int main(){
    printf("Enter Radius :");
    float radius;
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius *  radius;  
    printf("Area Of Circle :%f",area);
    return 0;
} 