#include<stdio.h>
int main(){
    int x,y;
    printf("Enter Coordinate x :");
    scanf("%d",&x);
    printf("Enter Coordinate y :");
    scanf("%d",&y);
    /*if(x==0 && y!=0){
        printf(" It lies on Y-Axis");
    }
    else if(y==0 && x!=0){
        printf("It lies on X-Axis.");
    }
    else{ if(x==0 && y==0){
        printf(" It lies on origin.");
    }
    else{
        printf("It lies not on origin , x or y axis.");
    }

    }*/
    if(x==0 && y==0){
        printf(" It lies on origin.");
    }
    else if ( x==0){
        printf(" It lies on Y-Axis");
    }
    else if( y==0 ){
         printf(" It lies on X-Axis");

    }

    return 0;


}