//숫자세기
#include<stdio.h>

int main(){
    int a,b;
    int output=0;
    scanf("%d",&a);
    int num[a];

    for (int i=0; i<a; i++){
        scanf("%d",&num[i]);
    }

    printf("put your number: ");
    scanf("%d",&b);

    for (int i=0; i<a; i++){
        if(b==num[i]){
            output++;
        }
    }

    printf("%d",output);
}