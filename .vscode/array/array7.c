//과제 안 내신 분?
#include<stdio.h>

int main(){
    int num[30];
    int number;
    for(int i=0; i<30; i++){
        num[i]=0;
    }

    for(int i=0; i<28; i++){
        scanf("%d", &number);
        num[number-1]=number;
    }

    for(int i=0; i<30; i++){
        if(num[i]==0){
            printf("%d\n", i+1);
        }
    }
}