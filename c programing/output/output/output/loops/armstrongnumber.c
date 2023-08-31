#include<stdio.h>
int main(){
    int i=1,s=0,ld=1,n;
    while(i<=500){
        ld=n%10;
        s=ld*ld*ld+s;
        if(i==s){
            printf("%d",s);
        }
        i++;

    }
    return 0;
}