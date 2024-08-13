//바구니 뒤집기
#include<stdio.h>

int main(){
    int basket, num;
    scanf("%d %d", &basket, &num);

    int number[basket];
    for(int i=0; i<basket; i++){
        number[i]=i+1;
    }

    int cn1, cn2, changer;
    for(int i=0; i<num; i++){
        scanf("%d %d", &cn1, &cn2);

        for(int t=0; t<(cn2-cn1+1)/2; t++){
            changer=number[cn1+t-1];
            number[cn1+t-1]=number[cn2-t-1];
            number[cn2-t-1]=changer;
        }
    }

    for(int i=0; i<basket; i++){
        printf("%d ",number[i]);
    }
}