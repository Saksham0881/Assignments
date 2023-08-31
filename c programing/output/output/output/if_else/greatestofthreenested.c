#include <stdio.h>
int main(){
 int a, b, c;
    printf("enter 1 number :");
    scanf("%d", &a);
    printf("enter 2 number :");
    scanf("%d", &b);
    printf("enter 3 number :");
    scanf("%d", &c);
    if (a>b) {//b is out pf race
        if(a>c){
            printf("a is greatest");
        }    
        else{
            printf(" c is greatest");
        }
    }
    else{
        if(b>c){
            printf("b is greatest");
        }
        else{
            printf("c is greatest");
        }
        }
    return 0;
    }
