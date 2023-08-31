#include<stdio.h>
int main(){
    int l ;
    printf("Enter Length :");
    scanf("%d",&l);
    int b ;
    printf("Enter Breadth :");
    scanf("%d",&b);
    int a = l*b;
    printf("\nArea of rectamgle is :%d",a);
    int p = 2*(l+b);
    printf("\nPerimter of rectangle is :%d",p);
    if(a>p){
        printf("\nArea is Greater than its Perimter.\nArea is :%d",a);
    }
    if(p>a){
        printf("\nPerimeter is greater tham its Area.\nPerimeter is :%d",p);
    }
    if(p==a){
        printf("\nArea is Equal to Its Perimeter.\nAera is :%d\n Perimeter is:%d",a,p);
    }
    return 0;
    
    
    
}