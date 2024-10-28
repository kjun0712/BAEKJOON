//공바꾸기
#include<stdio.h>

int main(){
    int basket, num;
    scanf("%d %d", &basket, &num);

    int score[basket];
    int cn1, cn2, changer;
    for(int i=0; i<basket; i++){
        score[i]=i+1;
    }

    for(int i=0; i<num; i++){
        scanf("%d %d", &cn1, &cn2);
        changer=score[cn1-1];
        score[cn1-1]=score[cn2-1];
        score[cn2-1]=changer;
    }

    for(int i=0; i<basket; i++){
        printf("%d ", score[i]);
    }
}