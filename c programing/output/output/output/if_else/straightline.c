#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter Coordinates of x:");
    scanf("%d%d%d",&x1,&x2,&x3);
    printf("Enter Coordinates of y:");
    scanf("%d%d%d",&y1,&y2,&y3);
    float m1 = (y2-y1)/(x2-x1);
    float m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("Slope of three points fall on straight line.");
    }
    else{
        printf("Slope of three points fall not on straight line.");
    }
    return 0;
}