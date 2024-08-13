#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int t=0;t<a-i-1;t++){
            printf(" ");
        }for(int t=0;t<=i;t++){
            printf("*");
        }
        printf("\n");
    }
}
