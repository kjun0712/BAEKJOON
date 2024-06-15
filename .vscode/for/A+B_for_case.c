#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);

    for(int i=1;i<a+1;i++){
        int b,c;
        scanf("%d %d",&b,&c);

        printf("Case #%d: %d\n",i,b+c);
    }
}